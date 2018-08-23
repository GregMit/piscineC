/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glamit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 18:00:15 by glamit            #+#    #+#             */
/*   Updated: 2018/08/22 15:40:40 by glamit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*str;
	void	(*f)();
}				t_opp;

int				ft_check_sign(char **av);
void			ft_putstr(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_add(int a, int b);
void			ft_sub(int a, int b);
void			ft_mul(int a, int b);
void			ft_div(int a, int b);
void			ft_mod(int a, int b);
void			ft_usage(char **av);
void			ft_putnbr(int nb);

#endif
