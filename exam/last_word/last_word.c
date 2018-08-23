/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 19:12:42 by glamit            #+#    #+#             */
/*   Updated: 2018/08/23 19:52:29 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	last_word(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	while(i > 0)
	{
		while(str[i] < 33)
			i--;
		while (str[i] > 32)
			i--;
		while (str[i + 1] > 32)
		{
			ft_putchar(str[i + 1]);
			i++;
		}
		ft_putchar('\n');
		return (0);
}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	last_word(av[1]);
	return (0);
}
