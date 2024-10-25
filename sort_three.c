/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:23:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/16 18:13:00 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_int(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

t_list	*ft_max(t_list **a)
{
	t_list *max;
	t_list *temp;

	max = *a;
	temp = *a;
	while(temp)
	{
		if (max->index < temp->index)
			max = temp;
		temp = temp->next;
	}
	return (max);
}

t_list	*ft_min(t_list **a)
{
	t_list *temp;
	t_list *min;

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
	if (max->pos == 1)
	{	
		ra(a);
		ft_set_pos(a);
	}
	else if (max->pos == 2)
	{
		rra(a);
		ft_set_pos(a);
	}
	if (min->pos == 2)
	{
		sa(a);
		ft_set_pos(a);
	}
}
