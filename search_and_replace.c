#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search(char *s1, char s2, char s3)
{
	int i; 

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2)
		{
			s1[i] = s3;
			ft_putchar(s1[i]);
		}
		else
			ft_putchar(s1[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		 if (av[2][1] || av[3][1])
			{
				ft_putchar('\n');
				return(0);
			}
		ft_search(av[1], av[2][0], av[3][0]);
	}
		ft_putchar('\n');
	return(0);
}

