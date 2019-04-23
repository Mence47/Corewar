/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 15:00:45 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:08:28 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Создание элемента списка без копирования (=> без выделения памяти)
*/

t_list	*ft_lstnew_ptr(void const *content)
{
	t_list	*res;

	if ((res = ft_memalloc(sizeof(t_list))))
	{
		if (content)
		{
			res->content = (void*)content;
			res->content_size = sizeof(void *);
		}
	}
	return (res);
}
