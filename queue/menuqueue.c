# include <stdio.h>
# include <stdlib.h>
# define MAX 50
void insert(void);
void delete(void);
void display(void);

int queue_array[MAX];
int rear = -1;
int front = -1;

/**
 * main - take input from user and perform an operation on
 *			the queue.
 * Return: 0
 */

int main(void)
{
	int choice;

	while (1)
	{
		printf("1. Insert element to queue \n");
		printf("2. Delete element from queue \n");
		printf("3. Display all elements of queue \n");
		printf("4. Quit \n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		getchar();
		switch (choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Wrong choice \n");

		}
	}
	exit(0);
}

/**
 * insert - insert an element in the queue
 */

void insert(void)
{
	int item;

	if (rear == MAX - 1)
		printf("Queue Overflow \n");
	else
	{
		if (front == -1)
			front = 0;
		printf("Insert the element in queue: ");
		scanf("%d", &item);
		getchar();
		rear++;
		queue_array[rear] = item;
	}
}

/**
 * delete - deletes an element from the list by pushing the
 *			front forward;
 */

void delete(void)
{
	if (front == -1 || front > rear)
	{
		printf("Queue Underflow \n");
		return;
	}
	printf("Element deleted from queue is: %d\n", queue_array[front]);
	front++;


}
/**
 * display - display element in list
 */
void display(void)
{
	int i;

	if (front == -1)
	{
		printf("Queue is empty \n");
		return;
	}
	printf("Queue is: \n");
	for (i = front; i <= rear; i++)
		printf("%d ", queue_array[i]);
	printf("\n");
}
