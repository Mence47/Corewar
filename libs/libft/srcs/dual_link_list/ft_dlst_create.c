/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:02:04 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/26 15:18:35 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlst_create(void)
{
	t_dlist	*res;

	if (!(res = ft_memalloc(sizeof(t_dlist))))
		return (NULL);
	return (res);
}
