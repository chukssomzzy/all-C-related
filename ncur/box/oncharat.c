# include "main.h"

/**
 * tossout - print one char at a time
 */

void tossout(void)
{
	char *t = "Greeting from ncurses!";

	initscr();
	while (*t)
	{
		addch(*t);
		t++;
		refresh();
		napms(100);
	}
	getch();
	endwin();
}
