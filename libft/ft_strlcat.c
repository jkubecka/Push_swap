/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkubecka <jkubecka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:21:53 by jkubecka          #+#    #+#             */
/*   Updated: 2024/11/06 21:07:29 by jkubecka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
	{
		return (len_src + dstsize);
	}
	while (i < (dstsize - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "rrrrrrr\0\0\0\0a\0\0\0\0";
	char src[] = "lorem";

	ft_strlcat(dst, src, 15);
	printf("%zu", ft_strlcat(dst, src, 15));
	printf("\n%s", dst);
	printf("\n%zu", strlcat(dst, src, 15));
	printf("\n%s", dst);
	return (0);
}*/
