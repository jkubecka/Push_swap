/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:23:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 21:13:37 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_max(t_list **a)
{
	t_list	*max;
	t_list	*temp;

	max = *a;
	temp = *a;
	while (temp)
	{
		if (max->index < temp->index)
			max = temp;
		temp = temp->next;
	}
	return (max);
}

t_list	*ft_min(t_list **a)
{
	t_list	*temp;
	t_list	*min;

	temp = *a;
	min = *a;
	while (temp)
	{
		if (min->index > temp->index)
			min = temp;
		temp = temp->next;
	}
	return (min);
}

void	sort_three(t_list **a)
{
	t_list	*min;
	t_list	*max;

	min = ft_min(a);
	max = ft_max(a);
	if (max->pos == 0)
		ra(a);
	else if (max->pos == 1)
		rra(a);
	if (min->pos == 1)
		sa(a);
}
