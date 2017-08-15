#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	write(1, "9876543210", 10);
	ft_putchar('\n');
	return (0);
}
