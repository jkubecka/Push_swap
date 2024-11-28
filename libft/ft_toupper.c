/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:19:09 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/16 22:27:33 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	int c;
	int result;

	c = 'A';
	result = ft_toupper(c);
	ft_toupper(c);
	printf("%d", result);
	return(0);
}
*/
