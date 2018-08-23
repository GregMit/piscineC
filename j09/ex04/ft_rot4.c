/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:24:47 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 12:25:09 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			str[i] += 16;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] -= 10;
		if (str[i] >= 'a' && str[i] <= 'j')
			str[i] += 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] -= 10;
		i++;
	}
	return (str);
}
