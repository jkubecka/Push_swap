/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:39:02 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/28 16:00:13 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "push_swap.h"

t_list	*prev_node(t_list **a, t_list *node_a)
{
	t_list	*aux;
	t_list	*node;
	int		diff;
	int		min_diff;

	aux = *a;
	node = NULL;
	min_diff = 2147483647;
	while(aux)
	{
		
	}
	
}

t_list	*next_node(t_list **a, t_list *node_a)
{
	t_list	*aux;
	t_list	*node;
	int		diff;
	int		min_diff;

	aux = *a;
	node = NULL;
	min_diff = 2147483647;
	while (aux)
	{
		diff = aux->value - node_a->value;
		if (diff > 0 && diff < min_diff)
		{
			min_diff = diff;
			node = aux;
		}
		aux = aux->next;
	}
	return (node);
}

void	set_target_pos(t_list **a, t_list **b)
{
	t_list	*temp;

	temp = *b;
	while (temp)
	{
		set_target(a, temp, size);
		temp = temp->next;
	}
} */ 