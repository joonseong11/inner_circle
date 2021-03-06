/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_mainsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jujeon <jujeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:33:03 by jujeon            #+#    #+#             */
/*   Updated: 2022/07/20 01:20:25 by jujeon           ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checkdeadcase(t_info *info, int i, int chunk)
{
	int		cnt;
	t_node	*node;

	cnt = 0;
	node = info->stacka_top->next;
	while (node && node->index > i + chunk)
	{
		cnt++;
		node = node->next;
	}
	if (cnt > ft_nodesize(info->stacka_top->next) / 2)
		return (1);
	return (0);
}

int	sort_where_are_you(t_info *info, int index)
{
	t_node	*node;
	int		i;

	i = 0;
	node = info->stackb_top->next;
	while (1)
	{
		if (node->index == index)
			break ;
		if (node->next)
		{
			node = node->next;
		}
		++i;
	}
	return (i);
}

void	sort_usesandclock(t_info *info, int size)
{
	int	index;
	int	i;

	index = size - 1;
	while (size)
	{
		i = sort_where_are_you(info, index);
		if (i < size / 2)
		{
			while (i--)
				safe_r(info, 'b');
		}
		else
		{
			while (i++ < size)
				safe_rr(info, 'b');
		}
		safe_p(info, 'a');
		--size;
		--index;
	}
}

void	sort_makesandclock(t_info *info, int i, int chunk)
{
	while (ft_nodesize(info->stacka_top->next))
	{
		if (info->stacka_top->next->index <= i)
		{
			safe_p(info, 'b');
			++i;
		}
		else if (i < info->stacka_top->next->index && \
					info->stacka_top->next->index <= i + chunk)
		{
			safe_p(info, 'b');
			safe_r(info, 'b');
			++i;
		}
		else if (info->stacka_top->next->index > (i + chunk))
		{
			if (checkdeadcase(info, i, chunk) == 1)
				safe_rr(info, 'a');
			else
				safe_r(info, 'a');
		}
	}
}

void	do_mainsort(t_info *info)
{
	int	i;
	int	size;
	int	chunk;

	i = 0;
	size = ft_nodesize(info->stacka_top->next);
	chunk = 0.000000053 * (size * size) + 0.03 * size + 14.5;
	sort_makesandclock(info, i, chunk);
	sort_usesandclock(info, size);
}
