/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:15:20 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 12:27:18 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <ft_ultimator.h>

void	ft_destroy(char ***farctory)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (factory[j])
	{
		while (factory[j][i] != '\0')
		{
			free(factory[j][i]);
			i++;
		}
		free(factory[j]);
		j++;
		i = 0;
	}
	free(factory);
}
