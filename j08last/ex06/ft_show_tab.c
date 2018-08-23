/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 22:10:35 by glamit            #+#    #+#             */
/*   Updated: 2018/08/20 18:46:47 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		y = 0;
		while (par[i].tab[y] != 0)
		{
			ft_putstr(par[i].tab[y]);
			ft_putchar('\n');
			y++;
		}
		i++;
	}
}
