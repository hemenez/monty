#include "monty.h"
int op_int;

/**
 * popfxn - function pops an element off the stack
 * @stack: represents double pointer to start of linked list
 * @line_number: represents line number of matching opcode
 * Return: function is void
 */

void popfxn(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(temp);
}
