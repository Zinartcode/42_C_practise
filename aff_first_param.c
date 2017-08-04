/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azinnatu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:24:52 by azinnatu          #+#    #+#             */
/*   Updated: 2017/01/29 21:58:03 by azinnatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
