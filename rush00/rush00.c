/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:12:23 by tbertran          #+#    #+#             */
/*   Updated: 2018/08/04 11:45:41 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(char first, char mid, char last, int size)
{
	int		index;

	index = 0;
	while (index < size)
	{
		if (index == 0)
			ft_putchar(first);
		else if (index == size - 1)
			ft_putchar(last);
		else
			ft_putchar(mid);
		index++;
	}
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			draw_line('o', '-', 'o', x);
		}
		else if (i == (y - 1))
		{
			draw_line('o', '-', 'o', x);
		}
		else
		{
			draw_line('|', ' ', '|', x);
		}
		ft_putchar('\n');
		i++;
	}
}
