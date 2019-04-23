/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pq_swap_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:33:54 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/02 15:27:45 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	pq_swap_node(t_pqueue *pqueue, size_t a, size_t b)
{
	if (pqueue && pqueue->length > a && pqueue->length > b)
	{
		ft_swap(&pqueue->nodes[a].priority, &pqueue->nodes[b].priority);
		ft_swap_ptr(&pqueue->nodes[a].content, &pqueue->nodes[b].content);
		return (1);
	}
	return (0);
}
