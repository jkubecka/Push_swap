/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:53:45 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/30 21:35:10 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cost_a(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*aux;
	int		len;
	int		pair;
	int		half;

	temp = *b;
	aux = *a;
	len = ft_lstsize(aux);
	if (len % 2 != 0)
		pair = 1;
	half = (len / 2) + pair;
	while (temp)
	{
		if (temp->target_pos <= half)
			temp->cost_a = temp->target_pos - 1;
		else if (temp->target_pos > half)
			temp->cost_a = temp->target_pos - len - 1;
		temp = temp->next;
	}
}

void	cost_b(t_list **b)
{
	t_list	*temp;
	int		len;
	int		pair;
	int		half;
	
	temp = *b;
	len = ft_lstsize(temp);
	pair = 0;
	if (len % 2 != 0)
		pair = 1;
	half = (len / 2) + pair;
	while (temp)
	{
		if (temp->pos <= half)
			temp->cost_b = temp->pos - 1;
		else if (temp->pos > half)
			temp->cost_b = temp->pos - len - 1;
		temp = temp->next;
	}
}
