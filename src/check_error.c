/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:05:52 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 21:16:16 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	error_char(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1] != '\0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != '\0')
		return (1);
	return (0);
}

int	error_number(t_list **a)
{
	t_list	*temp;
	t_list	*aux;

	aux = *a;
	temp = *a;
	if (ft_lstsize(*a) == 1)
		return (0);
	while (temp)
	{
		aux = temp->next;
		while (aux)
		{
			if (temp->value == aux->value)
				return (1);
			aux = aux->next;
		}
		temp = temp->next;
	}
	return (0);
}

void	ft_error(t_list **a)
{
	ft_freestack(a);
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}

void	ft_freestack(t_list **a)
{
	t_list	*temp;
	t_list	*node;

	node = *a;
	if (!node)
		return ;
	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*a = NULL;
}
