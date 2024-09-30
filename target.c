/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:16:05 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/28 18:30:59 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_next(t_list **a, t_list *node_b, int size)
{
	t_list *temp;
	int		i;
	int		index_b;

	temp = *a;
	i = 1;
	index_b = node_b->index;
	while (i <= size)
	{
		while (temp)
		{
			if (index_b + i == temp->index)
			{
				node_b->target_pos = temp->pos;
				return ;
			}
			temp = temp->next;
		}
		i++;
		temp = *a;
	}
}

void	set_target(t_list **a, t_list *node_b, int size)
{
	int	index_b;
	t_list	*min;
	t_list	*max;
	
	index_b = node_b->index;
	max = ft_max(a);
	if (index_b > max->index)
	{
		min = ft_min(a);
		node_b->target_pos = min->pos; 
	}
	else
		set_target_next(a, node_b, size);
}

void	target(t_list **a, t_list **b, int size)
{
	t_list *temp;

	temp = *b;
	while(temp)
	{
		set_target(a, temp, size);
		temp = temp->next;
	}
}
