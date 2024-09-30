/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:22:56 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/28 18:42:23 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_pos(t_list **lst)
{
	int	i;
    t_list *aux;
     
	i = 1;
    aux = *lst;
	while (aux)
	{
        aux->pos = i;
		aux = aux->next;
		i++;
	}
}
void	ft_set_pos2(t_list **a, t_list **b)
{
	ft_set_pos(a);
	ft_set_pos(b);
}

int main(int argc, char *argv[])
{
    t_list *a;
    t_list *b;
    t_list *node;
    int i;
	int	size;

    a = NULL;
    b = NULL;
    i = 1;
    while(argv[i])
    {
        node = ft_lstnew(ft_atoll(argv[i]));
        ft_lstadd_back(&a, node);
        i++;
    }
	size = ft_lstsize(a);
    ft_set_pos(&a);
    ft_index(&a);
    print_list(&a, "A");
	print_list(&b, "B\n");
	first_push(&a, &b);
	sort_three(&a);
	target(&a, &b, size);
    print_list(&a, "A");
    print_list(&b, "B");
}
