#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main (int argc, char **argv)
{
	if (argc == 4)
	{
		int	arg1 = atoi(argv[1]);
		int	arg2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			printf("%d", arg1 + arg2);
		else if (argv[2][0] == '-')
			printf("%d", arg1 - arg2);
		else if (argv[2][0] == '*')
			printf("%d", arg1 * arg2);
		else if (argv[2][0] == '/')
			printf("%d", arg1 / arg2);
		else if (argv[2][0] == '%')
			printf("%d", arg1 % arg2);
	}
	printf("\n");
	return (0);
}