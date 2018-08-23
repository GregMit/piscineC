/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 13:59:50 by glamit            #+#    #+#             */
/*   Updated: 2018/08/18 16:34:27 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tab;
	char	*len;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	tab = (char*)malloc(sizeof(char) * i);
	len = tab;
	i = 0;
	while (src[i] != '\0')
	{
		len[i] = src[i];
		i++;
	}
	len[i] = '\0';
	return (tab);
}
