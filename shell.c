/**
 * start_shell - Function to initiate the shell
*/
#include "shell_header.h"

void start_shell(void)
{
char input_buffer[MAX_INPUT_SIZE];
while (1)
{
printf("$ ");
if (fgets(input_buffer, sizeof(input_buffer), stdin) == NULL)
{
/*Handles CTR+D as end of file condition*/
printf("\n");
break;
}

/*Removes the new line character*/
input_buffer[strcspn(input_buffer, "\n")] = '\0';
if (strlen(input_buffer) > 0)
{
execute_command(input_buffer);
}
}
}
