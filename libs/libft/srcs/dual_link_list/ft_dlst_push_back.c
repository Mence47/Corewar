/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:31:37 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:16:46 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlst_push_back(t_dlist *list, t_node *node)
{
	if (list && node)
	{
		if (list->tail)
		{
			list->tail->next = node;
			node->prev = list->tail;
		}
		else
			list->head = node;
		list->tail = node;
		list->size++;
	}
}
