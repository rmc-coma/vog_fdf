/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_input_keyboard.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 19:49:36 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/15 20:05:02 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	fdf_lower_vertices(t_mesh *mesh)
{
	t_size	i;

	i = 0;
	while (i < mesh->n_vertices)
	{
		mesh->vertices[i * 3 + 1] = mesh->vertices[i * 3 + 1] == 0.0 ? 0.0 :
			mesh->vertices[i * 3 + 1] - mesh->vertices[i * 3 + 1] / 10;
		i++;
	}
}

static void	fdf_upper_vertices(t_mesh *mesh)
{
	t_size	i;

	i = 0;
	while (i < mesh->n_vertices)
	{
		mesh->vertices[i * 3 + 1] = mesh->vertices[i * 3 + 1] == 0.0 ? 0.0 :
			mesh->vertices[i * 3 + 1] + mesh->vertices[i * 3 + 1] / 10;
		i++;
	}
}

static void	fdf_revert_vertices(t_mesh *mesh)
{
	t_size	i;

	i = 0;
	while (i < mesh->n_vertices)
	{
		mesh->vertices[i * 3 + 1] = -(mesh->vertices[i * 3 + 1]);
		i++;
	}
}

int			fdf_input_keyboard(int keycode, t_fdf *ins)
{
	if (keycode == 53)
		fdf_close(ins);
	else if (keycode == 13)
		ins->modelview = *m_mat4scl(&(ins->modelview), 1.1f, 1.1f, 1.1f);
	else if (keycode == 1)
		ins->modelview = *m_mat4scl(&(ins->modelview), 0.9f, 0.9f, 0.9f);
	else if (keycode == 2)
		ins->modelview = *m_mat4trs(&(ins->modelview), -10.0f, 0.0f, 10.0f);
	else if (keycode == 0)
		ins->modelview = *m_mat4trs(&(ins->modelview), 10.0f, 0.0f, -10.0f);
	else if (keycode == 257)
		ins->modelview = *m_mat4trs(&(ins->modelview), -10.0f, 0.0f, -10.0f);
	else if (keycode == 49)
		ins->modelview = *m_mat4trs(&(ins->modelview), 10.0f, 0.0f, 10.0f);
	else if (keycode == 78)
		fdf_lower_vertices(ins->mesh);
	else if (keycode == 69)
		fdf_upper_vertices(ins->mesh);
	else if (keycode == 67)
		fdf_revert_vertices(ins->mesh);
	fdf_expose(ins);
	return (0);
}
