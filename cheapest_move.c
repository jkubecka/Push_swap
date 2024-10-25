/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:17:11 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/16 19:55:01 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_cheapest(t_list **b)
{
	t_list	*aux;
	t_list	*cheapest;
	
	aux = *b;
	cheapest = aux;
	while (aux)
	{
		if (aux->cost_t < cheapest->cost_t)
			cheapest = aux;
		aux = aux->next;
	}
	return (cheapest);
}

void	cheapest_move(t_list **a, t_list **b, t_list *node_b)
{
	node_b = ft_cheapest(b);
	if (node_b->op_a == node_b->op_b)
	{
		if (node_b->op_a == 0)
		{
			while (node_b->cost_a > 0 && node_b->cost_b > 0)
			{
				rr(&a, &b);
				node_b->cost_a--;
				node_b->cost_b--;
			}
		}
		else if (node_b->op_b == 1)
		{
			while(node_b->cost_a > 0 && node_b->cost_b > 0)
			{
				rrr(&a, &b);
				node_b->cost_a--;
				node_b->cost_b--;
			}
		}
	}
	while (node_b->cost_a > 0)
	{
		if (node_b->op_a == 0)
			ra(&a);
		else
			rra(&a);
		node_b->cost_a--;
	}
	while (node_b->cost_b > 0)
	{
		if (node_b->op_b == 0)
			rb(&b);
		else
			rrb(&b);
		node_b->cost_b--;
	}
	pa(&a, &b);
}
