/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 15:15:13 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 15:51:32 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_sort_integer_table(int *tab, int size)
{
	int x;
	int y;
	int tmp;

	size--;
	y = 0;
	while (y <= size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[x] > tab[x + 1])
			{
				tmp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = tmp;
				y = 0;
			}
			x++;
		}
		y++;
	}
	return (tab);
}

int		ft_max(int *tab, int length)
{
	tab = ft_sort_integer_table(tab, length);
	return (tab[length - 1]);
}
