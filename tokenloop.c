#include "monty.h"
/**
 *
 *
 */

int tokenloop(char *token, unsigned int line_number)
{
	int i, j, x;
	instruction_t in[] = {
		{"push", pushfxn},
		{"pall", pallfxn},
		{"pint", pintfxn},
/*		{"pop", popfxn},
		{"swap", swapfxn},
		{"add", addfxn},
		{"nop", nopfxn}, */
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
				op_int = atoi(token[i + 1]);
				if (op_int != 0)
				{
					in[j].f(stack, line_number);
					return (1);
				}
				else
					return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}
