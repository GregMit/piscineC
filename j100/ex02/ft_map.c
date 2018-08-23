/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:01:48 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 17:01:11 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int *mytab;

	i = 0;
	mytab = (int *)malloc(sizeof(int) * length + 1);
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
