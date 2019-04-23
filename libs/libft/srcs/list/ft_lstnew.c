/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:21:40 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:04:57 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if ((res = ft_memalloc(sizeof(t_list))))
	{
		if (content)
		{
			if ((res->content = ft_memalloc(content_size)))
			{
				ft_memcpy(res->content, content, content_size);
				res->content_size = content_size;
			}
		}
	}
	return (res);
}
