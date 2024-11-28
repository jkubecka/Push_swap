/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:19:56 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 17:31:15 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"

void		push_swap(t_list **a, t_list **b);
//BORRAR
//void		print_list(t_list **lst, char *str);
//ERROR CHECK 
int			error_char(char *str);
int			error_number(t_list **a);
int			check_order(t_list **a);
void		ft_error(t_list **a);
void		ft_freestack(t_list **a);

//UTILS
long long	ft_atoll(const char *str, t_list **lst, int i);
int			ft_max_int(int a, int b);
void		addfront(t_list **list, t_list *new);
void		ft_write_error(t_list **a);
//POS
void		ft_set_pos(t_list **lst);
void		ft_set_pos2(t_list **a, t_list **b);
//INDEX
void		ft_index(t_list **lst);
void		ft_order_array(int *array, int len);
void		ft_set_index(t_list **lst, int *array);
// MOVEMENTS 
//Push(**Origen, *Destino)
void		push(t_list **src, t_list **dst);
void		pa(t_list **b, t_list **a);
void		pb(t_list **a, t_list **b);
//Swap(**list)
void		swap(t_list **lst);
void		sa(t_list **a);
void		sb(t_list **b);
//Rotate(**list)
void		rotate(t_list **lst);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
//Reverse Rotate(**list)
void		reverserotate(t_list **lst);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);
//FIRST PUSH
void		first_push(t_list **a, t_list **b);
//SORT_THREE
void		sort_three(t_list **a);
t_list		*ft_min(t_list **a);
t_list		*ft_max(t_list **a);
//TARGET
t_list		*find_target(t_list **a, t_list *node_b);
//COST
void		set_cost(t_list **a, t_list **b);
//CHEAPEST MOVE
void		cheapest_move(t_list **a, t_list **b, t_list *node_b);

#endif
