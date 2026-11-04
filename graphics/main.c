#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_oldnames.h>
#include <SDL3/SDL_pixels.h>
#include <SDL3/SDL_render.h>
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
*/

#define WIDTH 320
#define HEIGHT 200

uint32_t framebuffer[WIDTH * HEIGHT];

int main(){
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Texture *texture;
    SDL_Event event;

    SDL_Init(SDL_INIT_VIDEO);

    window = SDL_CreateWindow(
        "SDL Buffer", 
        WIDTH, 
        HEIGHT,
         0);

    renderer = SDL_CreateRenderer(
        window, 
        NULL);

    texture = SDL_CreateTexture(
        renderer,
        SDL_PIXELFORMAT_XRGB8888, 
        SDL_TEXTUREACCESS_STREAMING,
        WIDTH, 
        HEIGHT);

    uint8_t is_running = 1;

    while(is_running){
        /*Poll the events */
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_EVENT_QUIT){
                is_running = 0;
            }
        }
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    
    /*Display the window and the renderer*/
    printf("Running SDL, works fine.");
    return EXIT_SUCCESS;
}