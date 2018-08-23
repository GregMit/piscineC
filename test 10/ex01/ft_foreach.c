/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:28:30 by glamit            #+#    #+#             */
/*   Updated: 2018/08/18 16:00:01 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void	ft_putnbr(int nb);

int main()
{
	int i[] = {0, 1, 2, 3, 4, 5, 6};
	ft_foreach(i, 7, &ft_putnbr);
	return (0);
}
