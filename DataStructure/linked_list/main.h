# ifndef _MAIN_H_
# define _MAIN_H_
# ifndef NULL
# define NULL ((void*)0)
# endif

/**
 * nodeptr - a pointer to struct
 */

typedef struct node *nodeptr;
/**
 * struct node - A linked list struct
 * @next: A pointer to next struct (i knw so convinent)
 * @value: value to hold in struct
 *
 * Description: A node is a struct that contains a node
 *				pointer. A List is either Null or data fellowed
 *				by a list
 */

struct node
{
	int value;
	nodeptr next;
};

/**
 * node - type alias to struct node
 */

typedef struct node node;
# endif
