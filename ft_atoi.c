#include <unistd.h>
#include <stdlib.h>

int		ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int		ft_atoi(const char *str)
{
    int		i;
    int		n;
    
    i = 0;
    while ((*str >= '\t' && *str <= '\r') || *str == 32)
        str++;
    if (*str == '-')
        n = -1;
    else
        n = 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str && ft_isdigit(*str))
        i = (i * 10) + (*str++ - '0');
    return (i * n);
}

void	ft_putchar(char c)
{
    write (1, &c, 1);
}

void	ft_putstr(char *str)
{
    int i;
    
    while (str[i])
        ft_putchar(str[i++]);
}

void	ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = - nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
        ft_putchar(nb + '0');
}

int main(int argc, const char *argv[])
{
    char	str[] = {'1', '0', '2', '1', '\n', '\0'};
    int i;
    
    i = 0;
    
    ft_putstr(str);
    i = ft_atoi(str);
    ft_putnbr(i);
    ft_putchar('\n');
    
    i = atoi(str);
    ft_putnbr(i);
    return 0;
}
