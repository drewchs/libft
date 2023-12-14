/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenewe <asenewe@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:57:28 by asenewe           #+#    #+#             */
/*   Updated: 2023/12/14 18:57:31 by asenewe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
