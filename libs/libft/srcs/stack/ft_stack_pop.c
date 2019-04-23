/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:25:25 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/02 18:07:11 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stack_pop(t_stack *stack, int *value)
{
	int i;

	if (stack->len)
	{
		*value = stack->head[0];
		i = 0;
		while (i < (stack->len - 1))
		{
			stack->head[i] = stack->head[i + 1];
			i++;
		}
		stack->head[i] = 0;
		stack->len--;
		return (1);
	}
	return (0);
}
