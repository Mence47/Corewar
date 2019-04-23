/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_drowning.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:50:07 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 20:07:12 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция позволяет утонуть элементу с указанной позиции
*/

void	pq_drowning(t_pqueue *pqueue, size_t pos)
{
	size_t	left_pos;
	size_t	right_pos;

	while (pos < pqueue->length)
	{
		left_pos = 1 + 2 * pos;
		right_pos = 2 + 2 * pos;
		if (left_pos >= pqueue->length)
			break ;
		if ((right_pos) == pqueue->length ||
			pq_compare_priority(pqueue, right_pos, left_pos))
		{
			if (!pq_compare_priority(pqueue, pos, left_pos))
				break ;
			pq_swap_node(pqueue, pos, left_pos);
			pos = left_pos;
		}
		else if (pq_compare_priority(pqueue, pos, right_pos))
		{
			pq_swap_node(pqueue, pos, right_pos);
			pos = right_pos;
		}
		else
			break ;
	}
}
