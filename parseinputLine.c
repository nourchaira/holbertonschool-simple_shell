#include "shell.h"

/**
 * parseinputLine - Parses the input line.
 * @inputBuffer: Buffer containing the input line.
 * Return: Vector of strings.
 */
char **parseinputLine(char *inputBuffer)
{
	int i = 0;
	char **line = NULL;
	char *token = NULL;

	line = malloc(1024);
	token = strtok(inputBuffer, " \n\t");
	line[i] = token;
	while (token)
	{
		i++;
		token = strtok(NULL, " \n\t");
		line[i] = token;
	}

	return (line);
}
