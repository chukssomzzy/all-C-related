# include "main.h"


/**
 * drawbox - draw box
 */

void drawbox(void)
{
	initscr();

	box(stdscr, 'h', 'g');
	addstr("Goodbye cruel C");
	refresh();
	getch();

	endwin();
}
