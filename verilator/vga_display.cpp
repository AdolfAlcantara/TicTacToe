#include <stdio.h>
#include "vga_display.h"
#include "SDL.h"

#define HORIZONTAL_LIMIT 1056
#define VERTICAL_LIMIT   628

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
unsigned int hcounter, vcounter, frame_count;
int hsync_pulse_received, vsync_pulse_received;
    
int vga_create_screen() {

    SDL_Init(SDL_INIT_VIDEO);

    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "VGA Screen",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        DISPLAY_WIDTH,
        DISPLAY_HEIGHT,
        SDL_WINDOW_OPENGL
    );

    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }
    
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    if (renderer == NULL) {
        printf("Could not create renderer : %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    
    hcounter = 0;
    vcounter = 0;
    frame_count = 0;
    hsync_pulse_received = 0;
    vsync_pulse_received = 0;
    
    return 0;
}

void vga_clock_pulse() {
    hcounter ++;
    if (hcounter == HORIZONTAL_LIMIT) {
        hsync_pulse_received = 0;
        hcounter = 0;
        vcounter ++;
        
        if (vcounter == VERTICAL_LIMIT) {
            vsync_pulse_received = 0;
            vcounter = 0;
        }
    }
}

void vga_hsync_pulse() {
    hsync_pulse_received = 1;
}

void vga_vsync_pulse() {
    vsync_pulse_received = 1;
    SDL_RenderPresent(renderer);
    frame_count++;
    printf("Frame count = %d\n", frame_count);
}

void vga_update_display(unsigned char red, unsigned char green, unsigned char blue) {
    if ((hcounter < DISPLAY_WIDTH) && (vcounter < DISPLAY_HEIGHT)) {
        SDL_SetRenderDrawColor(renderer, (red * 255)/7, (green * 255)/7, (blue * 255)/3, 255);
        SDL_RenderDrawPoint(renderer, hcounter, vcounter);
    }
}

int vga_screen_closed() {
    SDL_Event e;
    if (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            return 1;
        }
    }
    
    return 0;
}

void vga_finish() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);

    SDL_Quit();    
}

