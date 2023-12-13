#ifndef EXECUTOR_H
#define EXECUTOR_H
/**
 * execute command - Executes the command
 * @command: Command to be taken as input and executed
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void execute_command(char *command);
#endif
