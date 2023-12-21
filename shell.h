#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *getline(void);
int main (void);
char **parseinputLine(char *inputBuffer);
int shell(char *readline);
int execute_line(char *buuf[]);
void sigintHandler(__attribute__((unused)) int sig_num);

#endif
