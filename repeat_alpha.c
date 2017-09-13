#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			n = str[i] - 64;
		else if (str[i] >= 'a' && str[i] <= 'z')
			n = str[i] - 96;
		while (n > 0)
		{
			ft_putchar(str[i]);
			n--;
		}
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	else
		ft_putchar('\n');
	return (0);
}
