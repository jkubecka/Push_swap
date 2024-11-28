/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:50:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 16:54:09 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	cost_t(t_list *node_b)
{
	if (node_b->op_a == node_b->op_b)
		node_b->cost_t = ft_max_int(node_b->cost_a, node_b->cost_b);
	else
		node_b->cost_t = node_b->cost_a + node_b->cost_b;
}

void	cost_b(t_list **b, t_list *node_b)
{
	int	len;

	len = ft_lstsize(*b);
	if (node_b->pos <= (len / 2))
	{
		node_b->cost_b = node_b->pos;
		node_b->op_b = 0;
	}
	else
	{
		node_b->cost_b = len - node_b->pos;
		node_b->op_b = 1;
	}
}

void	cost_a_next(t_list **a, t_list *node_b, t_list	*target)
{
	int		len;

	len = ft_lstsize(*a);
	target = find_target(a, node_b);
	if (target->pos <= len / 2)
	{
		node_b->cost_a = target->pos;
		node_b->op_a = 0;
	}
	else
	{
		node_b->cost_a = len - target->pos;
		node_b->op_a = 1;
	}
}

void	cost_a(t_list **a, t_list *node_b)
{
	t_list	*min;
	t_list	*max;
	int		len;
	t_list	*target;

	min = ft_min(a);
	max = ft_max(a);
	len = ft_lstsize(*a);
	target = NULL;
	if (node_b->value < min->value || node_b->value > max->value)
	{
		target = min;
		if (min->pos <= (len / 2))
		{
			node_b->cost_a = min->pos;
			node_b->op_a = 0;
		}
		else
		{
			node_b->cost_a = len - min->pos;
			node_b->op_a = 1;
		}
	}
	else
		cost_a_next(a, node_b, target);
}

void	set_cost(t_list **a, t_list **b)
{
	t_list	*aux;

	aux = *b;
	while (aux)
	{
		cost_a(a, aux);
		cost_b(b, aux);
		cost_t(aux);
		aux = aux->next;
	}
}
