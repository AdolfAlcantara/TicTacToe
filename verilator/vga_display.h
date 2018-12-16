#ifndef _VGA_SCREEN_H

#define _VGA_SCREEN_H

#define DISPLAY_WIDTH  800
#define DISPLAY_HEIGHT 600

int vga_create_screen();
void vga_clock_pulse();
void vga_hsync_pulse();
void vga_vsync_pulse();
void vga_update_display(unsigned char red, unsigned char green, unsigned char blue);
int vga_screen_closed();
void vga_finish();

#endif