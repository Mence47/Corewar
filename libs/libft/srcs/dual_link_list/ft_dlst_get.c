/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:30:12 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/04 15:54:21 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_dlst_get_helper(t_dlist *list, size_t el_num)
{
	t_node	*cur;
	size_t	i;

	i = list->size - 1;
	cur = list->tail;
	while (cur)
	{
		if (el_num == i--)
			return (cur->content);
		cur = cur->prev;
	}
	return (NULL);
}

void		*ft_dlst_get(t_dlist *list, size_t el_num)
{
	t_node	*cur;
	size_t	i;

	if (list && el_num < list->size)
	{
		if (el_num < list->size / 2)
		{
			i = 0;
			cur = list->head;
			while (cur)
			{
				if (el_num == i++)
					return (cur->content);
				cur = cur->next;
			}
		}
		else
			return (ft_dlst_get_helper(list, el_num));
	}
	return (NULL);
}
