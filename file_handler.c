#include "monty.h"
/**
 * file_handler - handles all operations on file
 */
void file_handler (const char *filename)
{
	size_t bufsize = 0;
	int line_num = 1;
	int x;
	File *fp;
	char *buffer = NULL, *token;
	stack_t *stack;

	stack = NULL;

	if (filename == NULL)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bufsize, fp) != -1)
	{
		token = strtok(buffer,"/n/r//t ");
		x = tokenloop(token, line_num);
		if (x == 0)
		{
			printf("L%i: unknown instruction %s\n", line_num, token);
			exit(EXIT_FAILURE);
		}
		line_num++;
	}
	fclose(fp);
	free(buffer)
}
