#include "shell.h"
/**
 *_getline -gets the line.
 *Return: the command ready to tokz
 */
char *_getline(void)
{
	ssize_t x = 0;
	unsigned long int y = 0;
	char *input;

	x = getline(&input, &y, stdin);
	if (input == NULL)
	{
		free(input);
		perror("the executable not found");
	}
	if (x == EOF)
	{
		free(input);
		exit(0);
	}
	if (strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit(0);
	}
	return (input);
}
