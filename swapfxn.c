#include "monty.h"
/**
 * swapfxn - function swaps the top two elements of the stack
 * @stack: represents double pointer to beginning of linked list
 * @line_number: represents matching opcode's line number
 * Return: function is void
 */

void swapfxn(stack_t **stack, unsigned int line_number)
{

	stack_t *holder;
	int hold;

	holder = *stack;
	if (holder == NULL || holder->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	hold = holder->next->n;
	holder->next->n = holder->n;
	holder->n = hold;
}
