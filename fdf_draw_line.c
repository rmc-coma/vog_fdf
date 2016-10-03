/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_draw_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 22:38:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/14 19:41:08 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_bool	fdf_is_on_screen(t_vec2 *vertex, t_fdf *ins)
{
	if (vertex->x > 1.0 && vertex->x < (double)(ins->win_width) - 1.0 &&
		vertex->y > 1.0 && vertex->y < (double)(ins->win_height) - 1.0)
		return (TRUE);
	return (FALSE);
}

void			fdf_draw_line(t_vec2 *vertex1, t_vec2 *vertex2, t_fdf *ins)
{
	t_vec2	step;
	t_vec2	brush;
	t_size	i;

	if (!fdf_is_on_screen(vertex1, ins) && !fdf_is_on_screen(vertex2, ins))
		return ;
	step = m_vec2val(vertex2->x - vertex1->x, vertex2->y - vertex1->y);
	step = m_vec2nrm(&step);
	brush = *vertex1;
	i = fabs(step.x) > fabs(step.y) ? lround((vertex2->x - vertex1->x) / step.x)
		: lround((vertex2->y - vertex1->y) / step.y);
	while (i--)
	{
		if (fdf_is_on_screen(&brush, ins))
		{
			ins->frame->buffer[lround(brush.x) +
			lround(brush.y) * (*(ins->frame->size_line)) / 4 - 1] = 0x00FFFFFF;
		}
		brush = m_vec2add(&brush, &step);
	}
}
