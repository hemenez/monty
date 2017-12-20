#include "monty.h"
/**
 *
 *
 *
 */

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
