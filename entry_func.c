#include <monty.h>

int main(int argc, char *argv[])
{
	char *filename;

	filename = argv[1];

	if (argc == 1 or argc > 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_handler(filename);
	return(EXIT_SUCCESS);
}
