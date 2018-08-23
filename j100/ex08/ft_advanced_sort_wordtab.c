/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:15:35 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 19:54:36 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		l;
	char	*t;

	i = 0;
	l = 0;
	while (tab[l])
		l++;
	while (i < l - 1)
	{
		if ((*cmp)(tab[i], tab[i + 1]) > 0)
		{
			t = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = t;
			i = -1;
		}
		i++;
	}
	i = 0;
}
