/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printgrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 22:47:14 by glamit            #+#    #+#             */
/*   Updated: 2018/08/12 22:48:59 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_convert_input(char c)
{
	if (c == '.')
		return (0);
	else
		return (c - '0');
}

int			**ft_create_grid(char **arg)
{
	int		**tab;
	int		i;
	int		j;

	i = 0;
	tab = (int **)malloc(8 * 9);
	while (i < 9)
	{
		tab[i] = (int *)malloc(4 * 9);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			tab[i][j] = ft_convert_input(arg[i][j]);
			j++;
		}
		i++;
	}
	return (tab);
}

void		ft_print_grid(int **tab)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar('0' + tab[i][j]);
			if (j < 8)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		**grid;

	grid = ft_create_grid(argv + 1);
	ft_print_grid(grid);
}
