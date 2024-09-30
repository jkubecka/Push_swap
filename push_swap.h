/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:19:56 by jkubecka          #+#    #+#             */
/*   Updated: 2024/09/28 18:17:40 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int		value;
	int		pos;
	int		index;
	int 	target_pos;
	int		cost_a;
	int		cost_b;
	struct s_list	*next;
} t_list;

//BORRAR
void print_list(t_list **lst, char *str);
//Libft utils
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int value);
int		ft_lstsize(t_list *lst);
long long	ft_atoll(const char *str);
//pos
void	ft_set_pos(t_list **lst);
void	ft_set_pos2(t_list **a, t_list **b);
//index
void	ft_index(t_list **lst);
void	ft_order_array(int *array, int len);
void	ft_set_index(t_list **lst, int *array);
// MOVEMENTS 
//Push(**Origen, *Destino)
void	push(t_list **src, t_list **dst);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);
//Swap(**list)
void	swap(t_list **lst);
void	sa(t_list **a);
void	sb(t_list **b);
//Rotate(**list)
void	rotate(t_list **lst);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
//Reverse Rotate(**list)
void reverserotate(t_list **lst);
void	rra(t_list **a);
void	rrb(t_list **b);
//First push
void	first_push(t_list **a, t_list **b);
//Sort_three
void	sort_three(t_list **a);
t_list	*ft_min(t_list **a);
t_list	*ft_max(t_list **a);
//Target
void	target(t_list **a, t_list **b, int size);
#endif