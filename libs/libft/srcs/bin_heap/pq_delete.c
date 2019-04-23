/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 17:42:56 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/06 17:54:41 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pq_delete(t_pqueue **pqueue, void (*del)(void *, size_t))
{
	size_t i;

	if (pqueue && *pqueue)
	{
		if (del)
		{
			i = -1;
			while (++i < (*pqueue)->length)
				del((*pqueue)->nodes[i].content,
					(*pqueue)->nodes[i].content_size);
		}
		free((*pqueue)->nodes);
		free(*pqueue);
		*pqueue = NULL;
	}
}
