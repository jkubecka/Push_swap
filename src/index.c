/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:47:15 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 16:47:14 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_set_index(t_list **lst, int *array)
{
	t_list	*aux;
	int		i;

	aux = *lst;
	i = 0;
	while (aux)
	{
		if (aux->value == array[i])
		{
			aux->index = i;
			aux = aux->next;
			i = 0;
		}
		else
			i++;
	}
}

void	ft_order_array(int *array, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < len - 1)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	ft_index(t_list **lst)
{
	int		i;
	t_list	*aux;
	int		*array;

	i = 0;
	aux = *lst;
	array = malloc(ft_lstsize(*lst) * sizeof(int));
	if (!array)
		return ;
	while (aux)
	{
		array[i] = aux->value;
		i++;
		aux = aux->next;
	}
	ft_order_array(array, i);
	ft_set_index(lst, array);
	free(array);
}
