/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:07:01 by akam              #+#    #+#             */
/*   Updated: 2018/08/04 10:19:20 by akam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

int		main(void)
{
	rush(0, 0);
	ft_putchar('\n');
	rush(1, 0);
	ft_putchar('\n');
	rush(0, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(5, 5);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(-5, -5);
	return (0);
}
