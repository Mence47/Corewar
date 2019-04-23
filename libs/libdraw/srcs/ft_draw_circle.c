/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_circle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 18:33:17 by rschuppe          #+#    #+#             */
/*   Updated: 2019/03/09 16:07:46 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

static void	draw_one_pix_circle(t_mlx *visualiser, t_params *data,
	int color, int *pos)
{
	if (data->img)
		data->img->data[pos[1] * (data->img->size_l / 4) + pos[0]] = color;
	else
		mlx_pixel_put(visualiser->mlx_ptr, visualiser->win_ptr,
			pos[0], pos[1], color);
}

void		ft_draw_circle(t_mlx *visualiser, t_params *data, int color,
	int win_size)
{
	double	val;
	double	angle;
	double	offst;
	int		pos[2];

	val = PI / 180;
	offst = -(data->line_width / 2);
	while (offst < data->line_width / 2.0)
	{
		angle = 0;
		while (angle < 360)
		{
			pos[0] = data->x + round((data->radius + offst) * cos(angle * val));
			pos[1] = data->y + round((data->radius + offst) * sin(angle * val));
			if (pos[0] >= 0 && pos[0] < win_size &&
				pos[1] >= 0 && pos[1] < win_size)
				draw_one_pix_circle(visualiser, data, color, pos);
			angle++;
		}
		offst++;
	}
	return ;
}
