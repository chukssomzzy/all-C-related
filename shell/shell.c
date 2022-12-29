#include <bits/wait.h>
#include <linux/wait.h>
# include <stdlib.h>
# include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

unsigned int sh_run(char **lines);
/**
 * main - super simple shell example
 *
 * Return: 0 success
 */


int main(void)
{
	char *line = NULL, *lines[2];
	size_t n;
	ssize_t lnr;

	do {
		printf("#CISFUN$ ");
		lnr = getline(&line, &n, stdin);
		if (lnr == EOF)
		{
			printf("\n");
			exit(1);
		}
		lines[0] = strndup(line, lnr - 1);
		lines[1] = NULL;
		if (!sh_run(lines))
			exit(1);
	} while (lnr >= 0);
	exit(0);
}

/**
 * sh_run - manage shell
 * @lines: contains arrays of pointer
 * Return: 1 success
 */

unsigned int sh_run(char **lines)
{
	pid_t child_pid;
	int status;

	child_pid = fork();
	if (child_pid < 0)
	{
		perror("fork");
		return (0);
	}
	if (child_pid == 0)
	{
		if (execve(lines[0], lines, NULL) == -1)
		{
			perror("execve");
			exit(0);
		}
	}
	else
		do {
			waitpid(child_pid, &status, WUNTRACED);
		} while (!WIFSIGNALED(status) && !WIFEXITED(status));
	return (1);
}
