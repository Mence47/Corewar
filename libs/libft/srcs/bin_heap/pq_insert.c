/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:41:31 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/06 17:55:16 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция добавляет новый элемент в бинарную кучу
*/

int	pq_insert(t_pqueue *pqueue, void *content, int priority)
{
	size_t	pos;

	if (pqueue->length == pqueue->size)
		return (0);
	pos = pqueue->length;
	pqueue->nodes[pos].content = content;
	pqueue->nodes[pos].content_size = 0;
	pqueue->nodes[pos].priority = priority;
	pqueue->length++;
	pq_ascent(pqueue, pos);
	return (1);
}
