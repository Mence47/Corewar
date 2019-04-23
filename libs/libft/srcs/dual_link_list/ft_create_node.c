/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:32:26 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:17:37 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_create_node(void *content, size_t content_size)
{
	t_node	*res;

	if (!(res = ft_memalloc(sizeof(t_node))))
		return (NULL);
	if (content)
	{
		if ((res->content = ft_memalloc(content_size)))
		{
			ft_memcpy(res->content, content, content_size);
			res->content_size = content_size;
		}
	}
	return (res);
}
