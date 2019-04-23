/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_bg_gradient.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:38:33 by wballaba          #+#    #+#             */
/*   Updated: 2019/03/08 15:54:59 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

double	percent(int start, int end, int current)
{
	double placement;
	double distance;

	placement = current - start;
	distance = end - start;
	return ((distance == 0) ? 1.0 : (placement / distance));
}

int		get_light(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}

int		get_color(
	t_params current, t_params start, t_params end, t_params delta)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (current.color == end.color)
		return (current.color);
	if (delta.x > delta.y)
		percentage = percent(start.x, end.x, current.x);
	else
		percentage = percent(start.y, end.y, current.y);
	red = get_light(
		(start.color >> 16) & 0xFF, (end.color >> 16) & 0xFF, percentage);
	green = get_light(
		(start.color >> 8) & 0xFF, (end.color >> 8) & 0xFF, percentage);
	blue = get_light(start.color & 0xFF, end.color & 0xFF, percentage);
	return ((red << 16) | (green << 8) | blue);
}

void	put_pxl_clr(t_mlx *visualiser, t_params *data, t_params *cur)
{
	if (data->img)
		data->img->data[cur->y * data->width + cur->x] = cur->color;
	else
		mlx_pixel_put(visualiser->mlx_ptr, visualiser->win_ptr,
			cur->x, cur->y, cur->color);
}

void	ft_draw_bg_gradient(
	t_mlx *visualiser, t_params *data, int start_color, int end_color)
{
	t_params cur;
	t_params start;
	t_params end;
	t_params delta;

	start.x = 0;
	start.y = 0;
	start.color = start_color;
	end.x = data->width;
	end.y = data->height;
	end.color = end_color;
	cur.color = start.color;
	cur.y = -1;
	while (++cur.y < data->height)
	{
		cur.x = -1;
		while (++cur.x < data->width)
		{
			delta.x = cur.x - start.x;
			delta.y = cur.y - start.y;
			cur.color = get_color(cur, start, end, delta);
			put_pxl_clr(visualiser, data, &cur);
		}
	}
}
