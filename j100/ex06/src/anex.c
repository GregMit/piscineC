/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anex.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:31:12 by glamit            #+#    #+#             */
/*   Updated: 2018/08/21 18:39:28 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_atoi(char *str)
{
	int		i;
	int		r;
	int		sign;

	sign = 1;
	i = 0;
	r = 0;
	while (str[i] < 33)
	{
		i++;
	}
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (sign * r);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_check_sign(char **av)
{
	if ((av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '*' &&
				av[2][0] != '/' && av[2][0] != '%') || av[2][1] != '\0')
	{
		return (0);
	}
	else
		return (1);
}
