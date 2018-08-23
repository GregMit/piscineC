/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:58:10 by glamit            #+#    #+#             */
/*   Updated: 2018/08/04 12:15:07 by glamit           ###   ########.fr       */
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
			draw_line('A', 'B', 'A', x);
		}
		else if (i == (y - 1))
		{
			draw_line('C', 'B', 'C', x);
		}
		else
		{
			draw_line('B', ' ', 'B', x);
		}
		ft_putchar('\n');
		i++;
	}
}
