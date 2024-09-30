/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_reverserotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:27:35 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/11 19:15:26 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverserotate(t_list **lst)
{
    t_list  *first;
    t_list  *second_last;
    t_list  *last;
    
    first = *lst;
    second_last = *lst;
    while (second_last->next->next)
        second_last = second_last->next;
    last = second_last->next;
    last->next = first;
    second_last->next = NULL;
    *lst = last;
}
void	rra(t_list **a)
{
	reverserotate(a);
	//write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	reverserotate(b);
	//write(1, "rrb\n", 4);
}
void	rrr(t_list **a, t_list **b)
{
	reverserotate(a);
	reverserotate(b);
	//write(1, "rrr\n", 4);
}
