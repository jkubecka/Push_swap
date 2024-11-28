/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:06:42 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 21:10:33 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_set_pos(t_list **lst)
{
	int		i;
	t_list	*aux;

	if (!lst || !(*lst))
		return ;
	i = 0;
	aux = *lst;
	while (aux != NULL)
	{
		aux->pos = i;
		i++;
		aux = aux->next;
	}
}

void	ft_set_pos2(t_list **a, t_list **b)
{
	ft_set_pos(a);
	ft_set_pos(b);
}
