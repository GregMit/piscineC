/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:43:56 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 12:32:12 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i >= k && i <= j))
		return (i);
	if ((j >= i && j <= k) || (j >= k && j <= i))
		return (j);
	if ((k >= i && k <= j) || (k >= j && k <= i))
		return (k);
	return (0);
}