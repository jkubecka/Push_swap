/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:30 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/02 19:33:06 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_target(t_list **a, t_list *node_b)
{
	t_list	*target;
	t_list	*temp;
	int		aux;
	int		dif;

	temp = *a;
	dif = 2147483647;
	while (temp)
	{
		aux = temp->value - node_b->value;
		if (aux > 0 && aux < dif)
		{
			target = temp;
			dif = aux;
		}
		temp = temp->next;
	}
	return (target);
}