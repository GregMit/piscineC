/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 21:59:15 by glamit            #+#    #+#             */
/*   Updated: 2018/08/04 17:52:22 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_loopcd(int a, int b, int c, int d)
{
	while (c <= 9)
	{
		while (d <= 9)
		{
			ft_putchar(a + 48);
			ft_putchar(b + 48);
			ft_putchar(' ');
			ft_putchar(c + 48);
			ft_putchar(d + 48);
			if (a != 9 || b != 8 || c != 9 || d != 9)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			d++;
		}
		c++;
		d = 0;
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	int		c;
	int		d;

	a = 0;
	d = 1;
	while (a <= 9)
	{
		while (b <= 9)
		{
			ft_loopcd(a, b, c, d);
			b++;
			d = b + 1;
			c = a;
		}
		a++;
		b = 0;
	}
}
