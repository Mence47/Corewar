/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:23:41 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 17:25:06 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_stack_push(t_stack *stack, int value)
{
	int i;

	if (stack->size > stack->len)
	{
		i = stack->len;
		while (i > 0)
		{
			stack->head[i] = stack->head[i - 1];
			i--;
		}
		stack->head[i] = value;
		stack->len++;
	}
}
