/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:27:43 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/28 18:22:07 by jkubecka         ###   ########.fr       */
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
		printf("Value: %i  Pos: %i  Index: %i  Target_pos: %i\n", temp->value, temp->pos, temp->index, temp->target_pos);
		temp = temp->next;
	}
}