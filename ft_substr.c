/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenewe <asenewe@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:22:38 by asenewe           #+#    #+#             */
/*   Updated: 2023/12/18 22:53:57 by asenewe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
	{
		ret = malloc(sizeof(char) * (len + 1));
		if (!ret)
			return (0);
		ft_strlcpy(ret, s, 1);
		return (ret);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

// static char	*str_new(size_t n)
// {
// 	char	*str;

// 	str = (char *)malloc(sizeof(char) * (n + 1));
// 	if (!str)
// 		return (NULL);
// 	return (str);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	char	*str_ptr;

// 	if (!s)
// 		return (NULL);
// 	if (start > ft_strlen(s))
// 		len = 0;
// 	else if (len > (ft_strlen(s) - start))
// 		len = ft_strlen(s) - start;
// 	str = str_new(len);
// 	if (!str)
// 		return (NULL);
// 	s += start;
// 	str_ptr = str;
// 	*(str + len) = '\0';
// 	while (len-- && *s)
// 		*str++ = *s++;
// 	return (str_ptr);
// }
