/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:03:28 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 19:30:17 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция инициализирует очередь с приоритетом
*/

t_pqueue	*pq_init(size_t size, t_pq_type is_min_heap)
{
	t_pqueue	*new;

	if (!(new = (t_pqueue *)ft_memalloc(sizeof(*new))))
		return (NULL);
	new->type = is_min_heap;
	new->nodes = (t_pqueue_node*)ft_memalloc(size * sizeof(t_pqueue_node));
	if (!new->nodes)
	{
		free(new);
		return (NULL);
	}
	new->size = size;
	return (new);
}
