#include "shell.h"

/**
 * shell - the core of the shell
 * @getline: the command ready for parsing and excution
 * Return: the value returned from the excution
 */

int shell(char *getline)
{
	int f;
	char **command = malloc(sizeof(char *) * 1024);

	/**wait for user to enter commands */
	command = parseinputLine(getline);
	f = execute_line(command);
	return (f);
}
