/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:11:02 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 18:13:48 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Объединяет два списка в один, с удалением обертки второго
*/

void	ft_dlst_merge(t_dlist *dst, t_dlist **src)
{
	if (dst && src && *src && (*src)->size > 0)
	{
		if (dst->tail)
		{
			dst->tail->next = (*src)->head;
			(*src)->head->prev = dst->tail;
		}
		else
		{
			dst->head = (*src)->head;
			dst->tail = (*src)->head;
		}
		dst->tail = (*src)->tail;
		dst->size += (*src)->size;
		free(*src);
		*src = NULL;
	}
}
