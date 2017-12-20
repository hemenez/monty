#include "monty.h"
/**
 * file_handler - handles all operations on file
 */
void file_handler (const char *filename)
{
	size_t bufsize = 0;
	int i = 0;
	int x;
	File *fp;
	char *buffer = NULL, *token;


	//check if user gives more than one argument: argv
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
		x = tokenloop(token);
		if (x == 0)
			/* didn't work*/;
		else
			/*did work and found opcode */;
	}
	fclose(fp);
	free(buffer)
}

void pushfxn(stack_t **stack, unsigned int number)
{
	stack_t new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		//return an error
	}
	new_node->n = number;
	new_node->prev = NULL;
	new_node->next = *stack;
	*stack = new_node;
}

void pallfxn(stack_t **stack, unsigned int number)
{
	stack_t *printer;
	int i;

	printer = *stack;
	i = 0;
	while (printer != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
		i++;
	}
	return (i);
}

void pint(stack_t **stack, unsigned int number)
{
	if (*stack != NULL)
		printf("%d\n", *stack->n);
}
