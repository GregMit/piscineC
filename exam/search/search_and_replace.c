/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:49:04 by glamit            #+#    #+#             */
/*   Updated: 2018/08/23 19:08:15 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	int	i;

	if (ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}	
	i = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] == av[2][0])
		   av[1][i] = av[3][0];
		i++;
	}
	putstr(av[1]);
	write(1, "\n", 1);
}
