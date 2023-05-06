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
	terminal_writestring("is now booting\n");
	terminal_writestring("1\n");
	for (size_t i = 0; i < 25; i++) // supposed to count till 25 and newline each time to test scroll, but it doesn't.
	{ // I will need to rewrite tty.c entirely
		terminal_writestring(i + '0');
		terminal_writestring("\n");
	}
	
}