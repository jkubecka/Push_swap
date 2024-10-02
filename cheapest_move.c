/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:17:11 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/01 17:20:47 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cheapest_move(t_list **a, t_list **b)
{
	t_list	*aux;

	aux = ft_cheapest(b);
	if (aux->cost_a < 0 && aux->cost_b < 0)
	{
		
	}
}