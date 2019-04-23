/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschuppe <rschuppe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:00:24 by rschuppe          #+#    #+#             */
/*   Updated: 2019/02/22 19:04:05 by rschuppe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

t_mlx	*ft_create_window(int width, int height, char *title)
{
	t_mlx *data;

	if ((data = (t_mlx*)malloc(sizeof(t_mlx))))
	{
		data->mlx_ptr = mlx_init();
		data->win_ptr = mlx_new_window(data->mlx_ptr, width, height, title);
	}
	return (data);
}
