/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:50:48 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/03 15:26:57 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_size(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			count;
	char		*result;
	long int	nbr;

	nbr = n;
	count = ft_count_size(nbr);
	result = (char *)malloc((count + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[count] = '\0';
	if (nbr < 0)
		nbr = nbr * -1;
	while (count > 0)
	{
		count--;
		result[count] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
int main()
{
	printf("%s\n", ft_itoa(-2147483648));
	return (0);
}
*/
