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
		printf("Error: malloc failed/n");
		exit(EXIT_FAILURE);
	}
	if (*stack == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = op_int;
		*stack = new_node;
	}
	else
	{
		new_node->n = op_int;
		new_node->prev = NULL;
		new_node->next = *stack;
		*stack = new_node;
	}
}
