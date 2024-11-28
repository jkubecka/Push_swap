/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:22:56 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 16:45:39 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_list **a, t_list **b)
{
	ft_set_pos(a);
	ft_index(a);
	first_push(a, b);
	sort_three(a);
	while (*b)
	{
		set_cost(a, b);
		cheapest_move(a, b, *b);
	}
	while (!check_order(a))
	{
		if (ft_min(a)->pos <= (ft_lstsize(*a) / 2))
			ra(a);
		else
			rra(a);
	}
}

static char	*ft_join_arguments(int argc, char *argv[])
{
	char	*join;
	char	*temp;
	int		i;

	i = 1;
	join = ft_strdup(argv[i]);
	i++;
	while (i < argc)
	{
		temp = join;
		join = ft_strjoin((char const *)join, (char const *)argv[i]);
		free(temp);
		i++;
	}
	return (join);
}

static t_list	*ft_new_stack(t_list **a, int argc, char *argv[])
{
	t_list		*node;
	int			j;
	char		*join;
	char		**split;
	long long	num;

	join = ft_join_arguments(argc, argv);
	split = ft_split(join, ' ');
	free(join);
	j = 0;
	while (split[j])
	{
		num = ft_atoll(split[j], a, 0);
		if ((num == 0 && split[j][0] != '0') || error_char(split[j]) == 1)
			(ft_free_array(split), ft_error(a));
		node = ft_lstnew(num);
		if (!node)
			return (ft_free_array(split), ft_freestack(a), NULL);
		ft_lstadd_back(a, node);
		j++;
	}
	ft_free_array(split);
	return (*a);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc == 1)
		return (1);
	while (i <= argc - 1)
	{
		if (argv[i][0] == '\0')
			ft_write_error(&a);
		i++;
	}
	i = 1;
	a = ft_new_stack(&a, argc, argv);
	if (!a)
		return (1);
	if (error_number(&a) == 1)
		ft_error(&a);
	if (check_order(&a) != 1)
		push_swap(&a, &b);
	ft_freestack(&a);
	return (0);
}
