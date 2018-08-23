/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 21:35:43 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 16:06:30 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
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
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
