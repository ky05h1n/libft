/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:22:33 by enja              #+#    #+#             */
/*   Updated: 2021/11/21 14:07:41 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	dlen;
	size_t	slen;
	size_t	allsize;
	size_t	cpy;

	idx = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	allsize = ft_strlen(src) + ft_strlen(dst);
	cpy = dstsize - dlen;
	while (src[idx] && idx < cpy - 1)
	{
		dst[dlen] = src[idx];
		dlen++;
		idx++;
	}
	dst[dlen] = '\0';
	return (allsize);
}
