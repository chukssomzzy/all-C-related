#include <bits/wait.h>
#include <linux/wait.h>
# include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
# include <unistd.h>


/**
 * main - wait for process to finish
 *
 * Return: 0 success
 */


int main(void)
{
	pid_t child_pid;
	char *argv[] = {"/bin/ls", "-l", "/proc", NULL};
	size_t i = 0;
	int status;

	do {
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("child_pid");
			exit(1);
		}
		if (child_pid == 0)
		{
			if (execve(*argv, argv, NULL) == -1)
			{
				perror("execve");
				exit(1);
			}
		}
		else
			wait(&status);
	} while (++i < 5);
	exit(EXIT_SUCCESS);
}
