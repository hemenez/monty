#include "monty.h"
int op_int;
/**
 * tokenloop - function will send tokenized piece to see if it matches opcode
 * @token: represents first token tokenized from buffer
 * @line_number: represents line's number of match to be passed
 * @stack: represents double pointer to linked list
 * Return: function returns 1 if match, 0 if else
 */

int tokenloop(char *token, unsigned int line_number, stack_t **stack)
{
	int i, j;
	instruction_t in[] = {
		{"push", pushfxn},
		{"pall", pallfxn},
		{"pint", pintfxn},
		{NULL, NULL},
	};

	i = 0;
	while (token != NULL && token[i] != '\0')
	{
		j = 0;
		while (in[j].opcode != NULL)
		{
			if ((strcmp(token, (in[j].opcode)) == 0) &&
			    (strlen(token) == strlen(in[j].opcode)))
			{
				in[j].f(stack, line_number);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
