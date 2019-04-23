/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_extend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:23:10 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 17:23:28 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_extend(t_stack *stack, int add_size)
{
	int *tmp;

	if (stack)
	{
		stack->size += add_size;
		tmp = (int*)malloc(stack->size * sizeof(int));
		if (stack->head)
		{
			ft_memmove(tmp, stack->head, stack->len * 4);
			free(stack->head);
		}
		stack->head = tmp;
	}
}
