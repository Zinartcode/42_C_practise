#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	}
	else
		ft_putchar(nb - 48);
}
*/
void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm')
				ft_putchar('m' - (str[i] - 'n'));
			else if (str[i] < 'n')
				ft_putchar('m' - (str[i] - 'n'));
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] >'M')
				ft_putchar('M' - (str[i] - 'N'));
			else if (str[i] < 'N')
				ft_putchar('M' - (str[i] - 'N'));
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	alpha_mirror(argv[1]);
	return (0);
}
