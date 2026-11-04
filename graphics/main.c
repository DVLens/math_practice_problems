#include <SDL3/SDL.h>
#include <SDL3/SDL_error.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_oldnames.h>
#include <SDL3/SDL_pixels.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_surface.h>
#include <SDL3/SDL_timer.h>
#include <SDL3/SDL_video.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*    
    This program is to simply create a grid in a window.
    The steps to generate this.
    KEYWORDS = WINDOW, RENDER, FRAMEBUFFER, TEXTURE, EVENT
    0.- Init the SDL video library.
    1.- Create a Window.
        - We need to create a window for the OS we are using with some parameters.
    2.- Create a Render.
        - It manages the visible portion that is inside the window, it points to the render in memory.
    3.- Create the texture.
        - This texture is that it will be draw inside the render, it could be an image.        
    4.- Create the framebuffer.
        - It is the array of pixels colors.
    5.- Manipulate the framebuffer.
        - After that yo can manipulate the pixels inside the framebuffer.
    6.- Update the SDL texture with the frame buffer.    
    7.- Display the buffer/texture inside the render.
    
    TO RUN THIS PROGRAM IN LINUX YOU'LL NEED TO RUN THE NEXT COMMAND:
    gcc main.c -o framebuffer -lSDL3
    ./framebuffer
*/

#define WIDTH 320
#define HEIGHT 200

uint32_t framebuffer[WIDTH * HEIGHT];

void put_pixel(int x, int y, uint32_t color){
    if(x < 0 || x >= WIDTH || y < 0 || y >=WIDTH){
        return;
    }
    framebuffer[WIDTH*y + x] = color;
}

void clear(uint32_t color){
    for(int i = 0; i < WIDTH * HEIGHT; i++){
        framebuffer[i] = color;
    }
}

int main(){
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    SDL_Event event;

    const double target_frame = 1.0 / 60.0; // 0.016

    if(!SDL_Init(SDL_INIT_VIDEO)){
        fprintf(stderr, "SDL_Init failed %s\n", SDL_GetError());
        return EXIT_FAILURE;        
    }

    window = SDL_CreateWindow(
        "SDL Buffer", 
        WIDTH, 
        HEIGHT,
         0);

    if(window == NULL){
        fprintf(stderr, "SDL_CreateWindow failed %s\n", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;    
    }

    renderer = SDL_CreateRenderer(
        window, 
        NULL);

    if(renderer == NULL){
        fprintf(stderr, "SDL_CreateRenderer failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return EXIT_FAILURE;
    }

    texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_XRGB8888, 
        SDL_TEXTUREACCESS_STREAMING,
        WIDTH, 
        HEIGHT);

    if(texture == NULL){
        fprintf(stderr, "SDL_CreateTexture failed: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_DestroyRenderer(renderer);
        SDL_Quit();
        return EXIT_FAILURE;
    }

    SDL_SetTextureScaleMode(texture, SDL_SCALEMODE_NEAREST);

    uint8_t is_running = 1;

    while(is_running){

        uint64_t start = SDL_GetPerformanceCounter(); // It gives uns the high resolution hardware counter

        /*Poll the events */
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_EVENT_QUIT){
                is_running = 0;
            }
        }
        /*HERE WE CAN MANIPULATE OUR FRAMEBUFFER AS WE WISH*/        
        put_pixel(WIDTH / 2, HEIGHT / 2, 0xFF0000);

        clear(0xFFFFFF);

        for(int y = 0; y < HEIGHT; y++){
            for(int x = 0; x < WIDTH; x++){
                if(x % 5 == 0){
                    put_pixel(x, y, 0x00FFFF);
                }
            }
        }

        /* Copy the contents of the framebuffer to the texture*/
        SDL_UpdateTexture(texture,
        NULL,
        framebuffer,
        WIDTH * sizeof(uint32_t) //Width of the image/texute in bytes
        );
        SDL_RenderClear(renderer);
        SDL_RenderTexture(renderer,texture, NULL, NULL);        
        SDL_RenderPresent(renderer);        

        uint64_t end = SDL_GetPerformanceCounter();
        double elapsed = (double)(end - start) / SDL_GetPerformanceFrequency(); // It tells how fast the performance counter increments, you can think of it as "ticks"

        // Cap the framerate to 60 FPS
        if(elapsed < target_frame){
            SDL_Delay((target_frame - elapsed) * 1000.0); //sleep until we reach the target for 60 FPS
        }
    }
    
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    /*Display the window and the renderer*/
    printf("Running SDL, works fine.");
    return EXIT_SUCCESS;
}