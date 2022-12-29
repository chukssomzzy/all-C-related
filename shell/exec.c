# include <stdio.h>
# include <unistd.h>


/**
 * main - execve example
 *
 * Return: Always (0)
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/proc/", NULL};

	printf("Before execve");
	if (execve(*argv, argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After Execve");
	return (0);
}
