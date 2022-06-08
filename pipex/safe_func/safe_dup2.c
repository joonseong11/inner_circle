/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_dup2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeon <jujeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:03:40 by jujeon            #+#    #+#             */
/*   Updated: 2022/06/08 22:40:43 by jujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

int	safe_dup2(int fd1, int fd2)
{
	int	fd;

	fd = dup2(fd1, fd2);
	error(ERR, fd);
	return (fd);
}