#include "monty.h"
int op_int;
/**
 * pushfxn - function pushes an element to the stack
 * @stack: represents double pointer to start of linked list
 * @line_number: represents line number of matching opcode
 * Return: function is void
 */

void pushfxn(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void) line_number;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed/n");
		free_nodes(stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = op_int;
	if (*stack == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*stack = new_node;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = *stack;
		*stack = new_node;
	}
}
