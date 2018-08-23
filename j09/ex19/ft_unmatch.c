/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:18:59 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 15:03:47 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;
	int		c;

	i = -1;
	while (i++ < length - 1)
	{
		c = 1;
		j = i;
		while (j++ < length)
			if (tab[i] == tab[j])
				c++;
		j = i;
		while (j-- >= 0)
			if (tab[i] == tab[j])
				c++;
		if (c % 2 == 1)
			return (tab[i]);
	}
	return (0);
}
