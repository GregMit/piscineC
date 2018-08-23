/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 18:13:06 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 12:26:02 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_am(int hour)
{
	int		x;
	int		y;

	x = hour;
	y = x + 1;
	if (hour < 12)
	{
		if (hour == 0)
			printf("12.00 A.M. AND 1.00 A.M.\n");
		else
			printf("%d.00 A.M. AND %d.00 A.M.\n", x, y);
	}
}

void	ft_takes_place(int hour)
{
	int		x;
	int		y;

	x = hour - 12;
	y = x + 1;
	if (hour >= 0 && hour <= 24)
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", x, y);
	if (hour == 24)
		printf("%d.00 A.M. AND 1.00 A.M.\n", x);
	if (hour == 12)
		printf("12.00 P.M. AND %d.00 P.M.\n", y);
	if (hour > 12 && hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", x, y);
	ft_am(hour);
}
