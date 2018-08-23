/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 18:36:00 by glamit            #+#    #+#             */
/*   Updated: 2018/08/06 02:04:23 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		a;
	int		i;
	int		tmp;

	i = 0;
	a = 0;
	tmp = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (a < i)
	{
		tmp = str[a];
		str[a] = str[i];
		str[i] = tmp;
		a++;
		i--;
	}
	return (str);
}
