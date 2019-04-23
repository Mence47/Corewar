/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:48:47 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/04 15:51:01 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, size_t lst_num)
{
	size_t	i;
	t_list	*cur;

	if (lst)
	{
		i = 0;
		cur = lst;
		while (cur)
		{
			if (i == lst_num)
				return (cur);
			cur = cur->next;
		}
	}
	return (NULL);
}
