/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 22:05:42 by glamit            #+#    #+#             */
/*   Updated: 2018/08/18 23:04:39 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int argc, char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
		len++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		cpt;
	char	*str;
	int		len;

	len = ft_strlen(argc, argv);
	str = (char*)malloc(sizeof(char) * len);
	i = 1;
	cpt = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[cpt++] = argv[i][j];
			j++;
		}
		i++;
		str[cpt] = '\n';
		cpt++;
	}
	str[cpt - 1] = '\0';
	return (str);
}
