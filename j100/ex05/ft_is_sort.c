/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:38:11 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 19:27:50 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		w;

	i = 0;
	if (length < 2)
		return (1);
	w = 0;
	while (w == 0 && i < length - 1)
	{
		w = (*f)(tab[i], tab[i + 1]);
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (w < 0 && (*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		if (w > 0 && (*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
