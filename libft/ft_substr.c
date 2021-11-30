/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:25:08 by enja              #+#    #+#             */
/*   Updated: 2021/11/28 22:34:50 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	zy_strnlen(const char *str, size_t len)
{
	size_t	count;

	count = 0;
	while (str[count] && count < len)
		count++;
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*extstr;
	size_t	wiliwili;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) && start < ft_strlen(s))
	{
		extstr = malloc((ft_strlen(s) - start) + 1 * sizeof(char));
		if (!extstr)
			return (NULL);
		ft_strlcpy(extstr, s + start, ft_strlen(s) + 1);
		return (extstr);
	}
	if (len <= ft_strlen(s) && start <= len)
	{
	wiliwili = zy_strnlen(s + start, len);
	extstr = malloc(wiliwili + 1 * sizeof(char));
		if (!extstr)
			return (NULL);
		ft_strlcpy(extstr, s + start, len + 1);
		return (extstr);
	}
	extstr = ft_strdup("");
	return (extstr);
}
