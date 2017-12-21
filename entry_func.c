#include "monty.h"
int op_int;
/**
 * main - function represents entry point to get filename
 * @argc: represents number of arguments
 * @argv: represents pointer to arguments
 * Return: function returns success upon success, else failure
 */
int main(int argc, char *argv[])
{
	char *filename;

	filename = argv[1];

	if (argc == 1 || argc > 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_handler(filename);
	return (EXIT_SUCCESS);
}
