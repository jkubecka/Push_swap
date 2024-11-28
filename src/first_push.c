/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:15:07 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 21:11:51 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	first_push(t_list **a, t_list **b)
{
	int	len;
	int	half;

	if (!a || !*a || !b)
		return ;
	len = ft_lstsize(*a);
	half = (len / 2);
	while (len > half && len > 3)
	{
		if ((*a) && (*a)->index <= half)
		{
			pb(a, b);
			len--;
		}
		else
			ra(a);
	}
	while (len-- > 3 && *a)
	{
		pb(a, b);
		ft_set_pos2(a, b);
	}
}
