

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int count;

	i = 0;
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		count = argc - 1;
		while (argv[count][i] != '\0')
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
