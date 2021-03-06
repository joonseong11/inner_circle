/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeon <jujeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:36:29 by jujeon            #+#    #+#             */
/*   Updated: 2022/06/13 22:01:38 by jujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return ((size_t) NULL);
	while (str[i] != 0)
		i++;
	return (i);
}
