#include "monty.h"
/**
 *
 *
 *
 */

void pallfxn(stack_t **stack, unsigned int number)
{
	stack_t *printer;
	int i;

	printer = *stack;
	i = 0;
	while (printer != NULL)
	{
		printf("%d\n", printer->n);
		printer = printer->next;
		i++;
	}
	return (i);
}
