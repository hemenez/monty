#include "monty.h"
int op_int;
/**
 * pallfxn - function prints all the values on the stack
 * @stack: represents double pointer to start of linked list
 * @line_number: represents line number of opcode
 * Return: function is void
 */

void pallfxn(stack_t **stack, unsigned int line_number)
{
	stack_t *printer;
	(void) line_number;

	printer = *stack;
	while (printer != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
	}
}
