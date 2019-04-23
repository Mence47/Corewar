/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:31:06 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:17:05 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlst_push_front(t_dlist *list, t_node *node)
{
	if (list && node)
	{
		if (list->head)
		{
			list->head->prev = node;
			node->next = list->head;
		}
		else
			list->tail = node;
		list->head = node;
		list->size++;
	}
}
