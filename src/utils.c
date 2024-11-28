/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:22:41 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/08 17:18:21 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	ft_atoll(const char *str, t_list **lst, int i)
{
	int			sign;
	long long	result;

	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			ft_error(lst);
		result = (str[i++] - '0') + (result * 10);
	}
	if ((result * sign) <= 2147483647 && (result * sign) >= -2147483648)
		return (result * sign);
	else
		return (0);
}

int	ft_max_int(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

void	addfront(t_list **list, t_list *new)
{
	new->next = *list;
	*list = new;
}

void	ft_write_error(t_list **a)
{
	ft_freestack(a);
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}
