/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_display.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 17:19:36 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/14 19:41:49 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		fdf_clear_framebuffer(t_fdf *ins)
{
	t_size	i;

	mlx_clear_window(ins->mlx_ptr, ins->win_ptr);
	i = 0;
	while (i < ins->win_width * ins->win_height)
	{
		ins->frame->buffer[i] = 0;
		i++;
	}
}

static t_vec4	fdf_center(t_vec4 vertex, t_fdf *ins)
{
	return (m_vec4val(vertex.x + (double)(ins->win_width) / 2.0,
					vertex.y + (double)(ins->win_height) / 2.0, 0.0, 0.0));
}

static void		fdf_draw_tri(t_vec4 *v1, t_vec4 *v2, t_vec4 *v3, t_fdf *ins)
{
	t_vec2	pixel1;
	t_vec2	pixel2;
	t_vec2	pixel3;

	pixel1 = m_vec2val(v1->x, v1->y);
	pixel2 = m_vec2val(v2->x, v2->y);
	pixel3 = m_vec2val(v3->x, v3->y);
	fdf_draw_line(&pixel1, &pixel2, ins);
	fdf_draw_line(&pixel2, &pixel3, ins);
}

void			fdf_display(double *vertices, t_size size, t_fdf *ins)
{
	t_vec4	vertex1;
	t_vec4	vertex2;
	t_vec4	vertex3;
	t_vec4	vertex4;
	t_size	i;

	fdf_clear_framebuffer(ins);
	i = 0;
	while (i < size / 4)
	{
		vertex1 = m_vec4val(vertices[0], vertices[1], vertices[2], 1.0);
		vertex1 = fdf_center(m_mat4vec4mul(&(ins->modelview), &vertex1), ins);
		vertex2 = m_vec4val(vertices[3], vertices[4], vertices[5], 1.0);
		vertex2 = fdf_center(m_mat4vec4mul(&(ins->modelview), &vertex2), ins);
		vertex3 = m_vec4val(vertices[6], vertices[7], vertices[8], 1.0);
		vertex3 = fdf_center(m_mat4vec4mul(&(ins->modelview), &vertex3), ins);
		vertex4 = m_vec4val(vertices[9], vertices[10], vertices[11], 1.0);
		vertex4 = fdf_center(m_mat4vec4mul(&(ins->modelview), &vertex4), ins);
		fdf_draw_tri(&vertex1, &vertex2, &vertex3, ins);
		fdf_draw_tri(&vertex3, &vertex4, &vertex1, ins);
		vertices += 12;
		i++;
	}
	mlx_put_image_to_window(ins->mlx_ptr, ins->win_ptr,
							ins->frame->img_ptr, 0, 0);
}
