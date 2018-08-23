/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:09:58 by glamit            #+#    #+#             */
/*   Updated: 2018/08/18 16:52:40 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

int		ft_count_word(char *str)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 32 && str[i + 1] <= 32) ||
				(str[i] > 32 && str[i + 1] == '\0'))
			w++;
		i++;
	}
	return (w + 1);
}

void	ft_count_letters(char *str, char **tab)
{
	int i;
	int letters;
	int mot;

	i = 0;
	letters = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		letters = 0;
		while (str[i] != '\0' && str[i] <= ' ')
			i++;
		while (str[i] > ' ' && str[i] < 127)
		{
			i++;
			letters++;
		}
		tab[mot] = (char *)malloc(letters + 1 * sizeof(char));
		if (str[i] != '\0')
			i++;
		mot++;
	}
}

char	**ft_print_words(char *str, char **tab)
{
	int		i;
	int		j;
	int		x;

	x = 0;
	j = 0;
	i = 0;
	while (str[x] != '\0')
	{
		while (str[x] != '\0' && str[x] > 32)
		{
			tab[i][j] = str[x];
			x++;
			j++;
			if (str[x] == '\0' || str[x] <= 32)
			{
				tab[i++][j] = '\0';
				j = 0;
			}
		}
		while (str[x] != '\0' && str[x] <= 32)
			x++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	tab = (char **)malloc(sizeof(char *) * ft_count_word(str));
	ft_count_letters(str, tab);
	tab = ft_print_words(str, tab);
	return (tab);
}
