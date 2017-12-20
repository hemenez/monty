#include "monty.h"
/**
 *
 *
 */

int tokenloop(char *token)
{
	int i, j;
	instruction_t in[] = {
		{"push", pushfxn},
		{"pall", pallfxn},
		{"pint", pintfxn},
		{"pop", popfxn},
		{"swap", swapfxn},
		{"add", addfxn},
		{"nop", nopfxn},
		{NULL, NULL},
	};

	i = 0;
	while (token != NULL && token[i] != '\0')
	{
		j = 0;
		while (in[j].opcode != NULL)
		{
			if (strcmp(token[i], in[j].opcode == 0) &&
			    strlen(token[i]) == strlen(in[j].opcode))
			{
				if (isdigit(atoi(token[i + 1])))
				{
					in[j].f(stack, /*line_number*/);
					return (1);
				}
				else
					continue;
			}
			j++;
		}
		i++;
	}
	return (0);
}
