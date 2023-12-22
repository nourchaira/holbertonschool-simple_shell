#include "shell.h"

/**
 * main - the main function for the shell
 * Return: the integer status
 */

int main(void)
{
	int i;
	size_t buffer_size = 0;
	char *input = NULL;
	pid_t child_pid;

	while (1)
	{
		/**
		 * print_prompt - print the prompt symbol.
		 */
		print_prompt();
		if (getline(&input, &buffer_size, stdin) == EOF)
		{
			free(input);
			exit(0);
		}
		if (strcmp(input, "exit\n") == 0)
		{
			free(input);
			exit(0);
		}
		child_pid = fork();
		if (child_pid == 0)
		{
			shell(input);
			free(input);
			exit(0);
		}
		else if (child_pid < 0)
		{
			perror("fork failed");
			exit(0);
		}
		else
		{
			waitpid(child_pid, &i, 0);
		}
	}
	return (0);
}
