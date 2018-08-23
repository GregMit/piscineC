/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:47:22 by glamit            #+#    #+#             */
/*   Updated: 2018/08/05 19:34:21 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (str[i] == 43)
		i++;
	if (str[i] == 45)
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
