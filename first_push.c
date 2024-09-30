/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:15:07 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/11 19:40:14 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_push(t_list **a, t_list **b)
{
	int	len;
	int	pair;
	int	half;

	len = ft_lstsize(*a);
	pair = 0;
	if (len % 2 != 0)
		pair = 1;
	half = (len / 2) + pair;
	while (len > half && len > 3)
	{
		if ((*a)->index <= half)
		{
			pb(a, b);
			ft_set_pos2(a, b);
			len--;
		}
		else
			ra(a);
	}
	while (len-- > 3)
	{
		pb(a, b);
		ft_set_pos2(a, b);
	}
}
