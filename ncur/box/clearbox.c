# include "main.h"

/**
 * clearbox - clearscreen
 */

void clearbox(void)
{
	initscr();
	refresh();
	getch();

	endwin();
}
