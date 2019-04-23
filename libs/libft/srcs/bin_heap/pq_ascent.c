/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_ascent.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 19:42:50 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 15:26:24 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** функция позволяет всплыть элементу с указанной позиции
*/

void	pq_ascent(t_pqueue *pqueue, size_t pos)
{
	int up_pos;

	while (pos > 0)
	{
		up_pos = (pos + 1) / 2 - 1;
		if (pq_compare_priority(pqueue, up_pos, pos))
		{
			pq_swap_node(pqueue, up_pos, pos);
			pos = up_pos;
		}
		else
			break ;
	}
}
