/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeon <jujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:48:56 by jujeon            #+#    #+#             */
/*   Updated: 2022/02/25 19:59:39 by jujeon           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

/*
*****************************	MAIN FUNCTION	*******************************
 */

int	ft_printf(const char *format, ...);
int	ft_printf_char(char c);
int	ft_printf_str(char *s);
int	ft_printf_ptr(void *ptr, const char *base);
int	ft_printf_nbr(int n);
int	ft_printf_unbr(unsigned int n);
int	ft_printf_nbrbase(unsigned int nbr, const char *base);
int	base_check(const char *base);

#endif
