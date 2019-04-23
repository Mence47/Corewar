/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inline_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 15:16:19 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 20:06:34 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline int	pq_compare_priority(t_pqueue *pqueue, size_t a, size_t b)
{
	if (pqueue->type == PQ_TYPE_MAX)
		return (pq_priority(pqueue, a) < pq_priority(pqueue, b));
	else
		return (pq_priority(pqueue, a) > pq_priority(pqueue, b));
}

inline int	pq_priority(t_pqueue *pqueue, size_t pos)
{
	return (pqueue->nodes[pos].priority);
}
