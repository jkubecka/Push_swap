/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:23:52 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 17:37:54 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*temp;
	t_list	*aux;

	temp = *src;
	aux = (*src)->next;
	temp->next = *dst;
	*dst = temp;
	*src = aux;
	ft_set_pos2(src, dst);
}

void	pa(t_list **b, t_list **a)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
