/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:27:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/30 21:38:17 by jkubecka         ###   ########.fr       */
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
		printf("Value: %i  Pos: %i  Index: %i  Target_pos: %i	Cost_a: %i	Cost_b: %i\n", temp->value, temp->pos, temp->index, temp->target_pos, temp->cost_a, temp->cost_b);
		temp = temp->next;
	}
}