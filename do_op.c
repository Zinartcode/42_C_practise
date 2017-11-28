
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int	res;

	res = 0;
	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (*av[2] == '*')
		res = atoi(av[1]) * atoi(av[3]);
	else if (*av[2] == '/')
		res = atoi(av[1]) / atoi(av[3]);
	else if (*av[2] == '%')
		res = atoi(av[1]) % atoi(av[3]);
	else if (*av[2] == '+')
		res = atoi(av[1]) + atoi(av[3]);
	else if (*av[2] == '-')
		res = atoi(av[1]) - atoi(av[3]);
    printf("%d\n", res);
	printf("\n");
	return (0);
}
