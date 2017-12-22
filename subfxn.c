#include "monty.h"

/**
 * subfxn - subtracts the top two elements of the stack
 * @stack: top element stack
 * @line_number: line number of opcode
 * Return: void
 */
void subfxn(stack_t **stack, unsigned int line_number)
{

	int total = 0;
	stack_t *temp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	total = temp->next->n - temp->n;
	temp->next->n = total;
	popfxn(stack, line_number);
}
