/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:41:58 by glamit            #+#    #+#             */
/*   Updated: 2018/08/07 12:36:04 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		f;

	i = 1;
	f = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		f = i * f;
		i++;
	}
	return (f);
}
