/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_total.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:26:52 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/03 20:48:11 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_cheapest(t_list **b)
{
	t_list	*temp;
	t_list	*cheapest;
	int 	min;
	int 	total;
	
	temp = *b;
	min = 2147483647;
	while (temp)
	{
		total = cost_total(temp);
		if (total < min)
		{
			min = total;
			cheapest = temp;
		}
		temp = temp->next;
	}
	return (cheapest);
}

int	cost_total(t_list **b)
{
	t_list	*temp;
	int		total;
	int		cost_a;
	int		cost_b;
	
	temp = *b;
	cost_a = temp->cost_a;
	cost_b = temp->cost_a;

	if (cost_a < 0)
		cost_a = cost_a * -1;
	if (cost_b < 0)
		cost_b = cost_b * -1;
	total = cost_a + cost_b;
	return (total);
}
