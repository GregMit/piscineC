/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:58:27 by glamit            #+#    #+#             */
/*   Updated: 2018/08/21 18:40:09 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <unistd.h>

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
	}
	else if (b != 0)
		ft_putnbr(a / b);
}

void	ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
	}
	else if (b != 0)
		ft_putnbr(a % b);
}
