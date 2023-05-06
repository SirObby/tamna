#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
 
#include "tty.h"

void kernel_main(void) 
{
	/* Initialize terminal interface */
	terminal_initialize();
 
	/* Newline support is left as an exercise. */
	terminal_setcolor(VGA_COLOR_LIGHT_CYAN);
	terminal_writestring("TANNA ");
	terminal_setcolor(VGA_COLOR_WHITE);
	terminal_writestring("is now booting");
}