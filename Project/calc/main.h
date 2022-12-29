# ifndef _MAIN_H_
# define _MAIN_H_
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# define MAXOP 100
# define NUMBER '0'



int getop(char *);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
# endif
