/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:14:31 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 18:14:50 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlst_del(t_dlist **list, void (*del)(void *, size_t))
{
	t_node *cur;
	t_node *next;

	if (list)
	{
		cur = (*list)->head;
		while (cur)
		{
			next = cur->next;
			if (del)
				del(cur->content, cur->content_size);
			free(cur);
			cur = next;
		}
		free(*list);
		*list = NULL;
	}
}
