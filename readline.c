#include "main.h"
/**
 *readline -gets the line.
 *Return: the command ready to tokz
 */
char *readline(void)
{
	ssize_t x = 0;
	unsigned long int y = 0;
	char *input;

    write(STDOUT_FILENO, "$ ", 2);

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
