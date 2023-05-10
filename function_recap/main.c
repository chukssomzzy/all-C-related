# include "main.h"


/**
 * main - test getline
 * @argc: length of argv
 * @argv: contains all command line arguments
 * Return: 0 onsuccess and 1 on falilure
 */

int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	size_t buf_size = 1000;
	char *line_buf = malloc(sizeof(char) * buf_size);

	if (!line_buf)
		exit(1);

	while (_getline(line_buf, &buf_size) >= 0)
		printf("%s", line_buf);
	exit(0);
}
