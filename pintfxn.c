#include "monty.h"
/**
 *
 *
 *
 *
 */

void pintfxn(stack_t **stack, unsigned int number)
{
	if (*stack != NULL)
		printf("%d\n", *stack->n);
}
