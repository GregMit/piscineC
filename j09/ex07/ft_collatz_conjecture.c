/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 00:04:06 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 12:13:37 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else
	{
		if (base % 2 == 1 && base != 0)
			return (1 + ft_collatz_conjecture(3 * base + 1));
		else
			return (1 + ft_collatz_conjecture(base / 2));
	}
}
