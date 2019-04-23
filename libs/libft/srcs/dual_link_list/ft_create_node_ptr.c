/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_node_ptr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:15:03 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 16:58:05 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_create_node_ptr(void *content)
{
	t_node	*res;

	if ((res = ft_memalloc(sizeof(t_node))))
	{
		if (content)
		{
			res->content = content;
			res->content_size = sizeof(void *);
		}
	}
	return (res);
}
