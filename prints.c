/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:27:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/10/16 18:24:12 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list **lst, char *str)
{
	t_list *temp;

	temp = *lst;
	printf("%s\n", str);
	while(temp)
	{
		printf("Value: %i  Pos: %i  Index: %i   cost_a: %i   cost_b: %i	  cost_t: %i\n", temp->value, temp->pos, temp->index, temp->cost_a, temp->cost_b, temp->cost_t);
		temp = temp->next;
	}
}