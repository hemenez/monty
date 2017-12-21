#include "monty.h"

/**
 * addfxn - adds the top two elements of the stack
 * @stack: top element stack
 * @line_number: line number of opcode
 * Return: void
 */
void addfxn(stack_t **stack, unsigned int line_number)
{

	int sum = 0;
	stack_t *temp;

	temp = *stack;
	if (temp == NULL || temp->next == NULL)
	{
		printf("L%d:, can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	popfxn(stack, line_number);
}
