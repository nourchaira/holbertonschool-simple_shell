#include "shell.h"
/**
 * sigintHandler - handle ctrl c
 * @sig_num: integer
 */
void sigintHandler(__attribute__((unused)) int sig_num)
{
	signal(SIGINT, sigintHandler);
	printf("\n");
}
