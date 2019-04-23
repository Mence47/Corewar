/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_remove_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:23:35 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/07 17:14:18 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_node_belong_dlst(t_dlist *list, t_node *node)
{
	t_node *cur;

	cur = list->head;
	while (cur)
	{
		if (cur == node)
			return (1);
		cur = cur->next;
	}
	return (0);
}

/*
**		Не оттестировано
*/

void		ft_dlst_remove_node(
	t_dlist *list, t_node *node, void (*del)(void *, size_t))
{
	int checked;

	if (!list)
		return ;
	checked = 0;
	if (node == list->head)
	{
		list->head = node->next;
		checked = 1;
	}
	if (node == list->tail)
	{
		list->tail = node->prev;
		checked = 1;
	}
	if (!checked && !is_node_belong_dlst(list, node))
		return ;
	if (node->next)
		node->next->prev = node->prev;
	if (node->prev)
		node->prev->next = node->next;
	if (del)
		del(node->content, node->content_size);
	free(node);
	list->size--;
}
