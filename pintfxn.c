#include "monty.h"
int op_int;
/**
 * pintfxn - function prints the value at the top of the stack
 * @stack: represents double pointer to beginning of linked list
 * @line_number: represents line number of matching opcode
 * Return: function is void
 */

void pintfxn(stack_t **stack, unsigned int line_number)
{
	(void) line_number;
	if (stack != NULL)
		printf("%d\n", (*stack)->n);
}
