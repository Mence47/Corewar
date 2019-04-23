/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_extract.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 15:22:09 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/04 13:07:43 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция извлекает максимальный элемент (вершину) бинарной кучи
*/

inline void	*pq_extract(t_pqueue *pqueue)
{
	return (pq_extract_ex(pqueue, NULL));
}

void		*pq_extract_ex(t_pqueue *pqueue, int *priority)
{
	void	*ret;

	if (!pqueue->length)
		return (NULL);
	if (priority)
		*priority = pqueue->nodes[0].priority;
	ret = pqueue->nodes[0].content;
	pq_swap_node(pqueue, 0, pqueue->length - 1);
	pqueue->length--;
	pq_drowning(pqueue, 0);
	return (ret);
}
