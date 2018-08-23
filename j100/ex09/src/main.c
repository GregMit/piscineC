/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:47:22 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 23:30:11 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "ft_opp.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int		main(int ac, char **av)
{
	int b;
	int a;
	int	index;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	index = 0;
	ft_usage(av);
	while (index < 5)
	{
		if (ft_strcmp(g_opptab[index].str, av[2]) == 0)
		{
			g_opptab[index].f(a, b);
			ft_putchar('\n');
		}
		index++;
	}
	return (0);
}
