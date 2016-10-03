/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 17:25:00 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/14 20:04:32 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_fdf	*fdf_init(t_size win_width, t_size win_height)
{
	t_fdf	*new;

	new = (t_fdf *)malloc(sizeof(t_fdf));
	new->mlx_ptr = mlx_init();
	new->win_ptr = mlx_new_window(new->mlx_ptr, win_width, win_height, "FdF");
	new->win_height = win_height;
	new->win_width = win_width;
	new->modelview = m_mat4idt();
	new->modelview = *m_mat4rot(&(new->modelview), 210.0f, m_vec3val(1, 0, 0));
	new->modelview = *m_mat4rot(&(new->modelview), 315.0f, m_vec3val(0, 1, 0));
	new->frame = (t_fb *)malloc(sizeof(t_fb));
	new->frame->img_ptr = mlx_new_image(new->mlx_ptr, win_width, win_height);
	new->frame->bpp = (int *)malloc(sizeof(int));
	new->frame->size_line = (int *)malloc(sizeof(int));
	new->frame->endian = (int *)malloc(sizeof(int));
	new->frame->buffer = (int *)mlx_get_data_addr(new->frame->img_ptr,
				new->frame->bpp, new->frame->size_line, new->frame->endian);
	new->mesh = (t_mesh *)malloc(sizeof(t_mesh));
	new->mesh->vertices = NULL;
	return (new);
}
