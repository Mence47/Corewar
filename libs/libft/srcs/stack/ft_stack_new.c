/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:22:43 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 17:22:53 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_stack_new(int size)
{
	t_stack *stack;

	stack = (t_stack*)malloc(sizeof(t_stack));
	if (stack)
	{
		stack->head = (int*)malloc(size * sizeof(int));
		stack->len = 0;
		stack->size = size;
	}
	return (stack);
}
