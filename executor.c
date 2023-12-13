/**
 * execute_command - Function for executing command on.
 *
 * @command: Command to be parsed to the shell.
 */
#include "shell_header.h"

void execute_command(char *command)
{
pid_t pid = fork();
if (pid == 0)
{
/*Child process*/
if (execlp(command, command, (char *)NULL) == -1)
{
perror("simple_shell");
exit(EXIT_FAILURE);
}
}
else if (pid < 0)
{
/*Fork error*/
perror("fork");
exit(EXIT_FAILURE);
}
else
{
/*Parent process*/
waitpid(pid, NULL, 0);
}
}
