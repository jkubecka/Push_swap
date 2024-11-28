/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:32:06 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/16 22:28:09 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int	c;
	int	result;

	c = 'H';
	result = ft_tolower(c);
	ft_tolower(c);
	printf("%d", result);
	return(0);
}
*/
