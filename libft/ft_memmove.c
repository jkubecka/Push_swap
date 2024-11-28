/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:42:26 by jkubecka          #+#    #+#             */
/*   Updated: 2024/04/25 11:32:35 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str_dst;
	const char	*str_src;
	size_t		i;

	i = 0;
	str_dst = (char *)dst;
	str_src = (const char *)src;
	if ((dst == NULL && src == NULL) || len == 0)
		return (dst);
	if (str_dst > str_src)
	{
		while (len-- > 0)
			str_dst[len] = str_src[len];
	}
	else
	{
		while (i < len)
		{
			str_dst[i] = str_src[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[] = "hello";
	char src[] = "funciona";

	printf("%s", ft_memmove(dst, src, 3));
	printf("\n%s", memmove(dst, src, 3));
	return (0);
}
*/
