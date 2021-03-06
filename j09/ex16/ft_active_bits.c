/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:31:18 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 16:48:50 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_ative_bits(int value)
{
	int		i;

	i = 0;
	if (value == -2147483648)
	{
		value == 2147483647;
		i++;
	}
	if (value < 0)
		value *= -1;
	while (value > 0)
	{
		if (value % 2 == 1)
			i++;
		value /= 2;
	}
	return (i);
}
