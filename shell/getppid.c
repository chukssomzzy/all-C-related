# include <unistd.h>
# include <stdio.h>

/**
 * main - print parent pid
 * Return: 0 success
 */

int main(void)
{
	pid_t pid = getppid();

	printf("ppid %u\n", pid);
	return (0);
}
