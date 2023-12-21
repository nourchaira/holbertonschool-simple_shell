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
	line[i] = strtok(inputBuffer, " \n\t");
	while (token)
	{
		i++;
		token = strtok(NULL, " \n\t");
		line[i] = token;
	}

	return (line);
}

/**
 *execute_line - the function to use execve while executing the line
 *@buuf: the buffer with the whole command
 *Return: integer of the status
 */
int execute_line(char *buuf[])
{
	int v = 0;
	char c[] = "/bin/";
	char k = '/';
	char f = buuf[0][0];

	if (f == k)
	{
		execve(buuf[0], buuf, NULL);
	}
	else
	{
		strcat(c, buuf[0]);
		v = execve(c, buuf, NULL);
	}
	if (v == -1)
	{
		printf("no its here");
	}
	return (v);
}

/**
 * shell - the core of the shell
 * @readline: the command ready for parsing and excution
 * Return: the value returned from the excution
 */

int shell(char *readline)
{
	int f;
	char **command = malloc(sizeof(char *) * 1024);

	/**wait for user to enter commands */
	command = parseinputLine(readline);
	f = execute_line(command);
	return (f);
}
