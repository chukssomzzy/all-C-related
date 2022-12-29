# ifndef _MAIN_H
# define _MAIN_H
# include <stdio.h>


int _getline(char *line, int len);
char *alloc(int n);
void afree(char *p);
int readlines(char *lineptr[], int maxlines);
void writelines(char **lineptr, int nlines);
void quicksort(char **arr, int lo, int hi);
# ifndef NULL
# define NULL ((void *)0)
# endif
# endif
