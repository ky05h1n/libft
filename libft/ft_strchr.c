/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:23:38 by enja              #+#    #+#             */
/*   Updated: 2021/11/19 20:20:40 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cnv;
	int		a;
	int		count;

	cnv = ((char)c);
	a = 0;
	count = 0;
	while (s[a] != '\0')
	a++;
	while (count <= a)
	{
		if (cnv == *s)
			return ((char *)s);
		else
			s++;
		count++;
	}
	return (NULL);
}
