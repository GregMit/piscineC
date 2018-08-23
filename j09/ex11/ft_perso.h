/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:09:11 by glamit            #+#    #+#             */
/*   Updated: 2018/08/10 14:18:36 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>
# define SAVE_THE_WORLD "SAVE_THE_WORLD"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
