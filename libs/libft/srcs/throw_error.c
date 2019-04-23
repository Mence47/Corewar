/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   throw_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 18:21:34 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/19 18:21:53 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	throw_error(const char *title, const char *err)
{
	if (title)
		ft_putstr_fd(title, 2);
	ft_putstr_fd(err, 2);
	write(2, "\n", 1);
	exit(EXIT_FAILURE);
	return (1);
}
