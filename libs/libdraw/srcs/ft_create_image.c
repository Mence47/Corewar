/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wballaba <wballaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:26:26 by wballaba          #+#    #+#             */
/*   Updated: 2019/02/26 18:55:40 by wballaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

t_img	*ft_create_image(t_mlx *mlx, int width, int height)
{
	t_img	*img;

	if ((img = (t_img*)malloc(sizeof(t_img))))
	{
		img->img_ptr = mlx_new_image(mlx->mlx_ptr, width, height);
		img->data = (int*)mlx_get_data_addr(
			img->img_ptr, &img->bpp, &img->size_l, &img->endian);
	}
	return (img);
}
