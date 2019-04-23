/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_rectangle.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 14:53:31 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/09 16:14:50 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

static void	draw_horizontal_line(t_mlx *visualiser, t_params *data, int color)
{
	int i;
	int j;

	i = 0;
	while (i < data->width)
	{
		j = 0;
		while (j < data->line_width)
		{
			mlx_pixel_put(
				visualiser->mlx_ptr, visualiser->win_ptr,
				data->x + i, data->y + j, color);
			mlx_pixel_put(
				visualiser->mlx_ptr, visualiser->win_ptr,
				data->x + i, data->y + data->height - j - 1, color);
			j++;
		}
		i++;
	}
}

static void	draw_vertical_line(t_mlx *visualiser, t_params *data, int color)
{
	int i;
	int j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->line_width)
		{
			mlx_pixel_put(
				visualiser->mlx_ptr, visualiser->win_ptr,
				data->x + j, data->y + i, color);
			mlx_pixel_put(
				visualiser->mlx_ptr, visualiser->win_ptr,
				data->x + data->width - j - 1, data->y + i, color);
			j++;
		}
		i++;
	}
}

void		ft_draw_rectangle(t_mlx *visualiser, t_params *data, int color)
{
	draw_vertical_line(visualiser, data, color);
	draw_horizontal_line(visualiser, data, color);
}
