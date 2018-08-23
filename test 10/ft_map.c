/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:01:48 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 16:52:49 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int(*f)(int))
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

int		test(int a)
{
	return (a + 10);
}
#include <stdio.h>
int main(int ac, char **av)
{
	int tab[] = {1, 2, 3, 4, 5};
	int *tab2;
	int i;

	i = 0;
	tab2 = ft_map(tab, 5, &test);
	while (i < 5)
	{
		printf("%d\n", tab2[i]);
		i++;
	}
}
	
