#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	int producto;

	if (argc == 3)
	{
		producto = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", producto);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
