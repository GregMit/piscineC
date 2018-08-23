/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:14:58 by glamit            #+#    #+#             */
/*   Updated: 2018/08/20 18:45:30 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_par	*par;

	i = 0;
	par = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = (char *)malloc(sizeof(char) * par[i].size_param);
		j = 0;
		while (j < par[i].size_param)
		{
			par[i].copy[j] = av[i][j];
			j++;
		}
		par[i].copy[j] = '\0';
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
