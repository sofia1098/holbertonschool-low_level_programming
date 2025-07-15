#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
	int i, sum;

	for (i = 0; i < argc; i++)
	{
		if (argv[i + 1] > 47 && argv[i + 1] < 58)
		{
			sum = argv[i + 1] + argv[i + 2];
			printf("%d\n", sum);
			return (0);
		}
		else
		{
			printf("Error");
	                return (1);
		}
	}
}
