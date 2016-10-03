/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4rot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:12:27 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4rot(t_mat4 *matrix, float angle, t_vec3 axle)
{
	T_MATU	x;
	T_MATU	y;
	T_MATU	z;
	t_mat4	rotation;

	angle = angle * M_PI / 180;
	rotation = m_mat4idt();
	x = axle.x;
	y = axle.y;
	z = axle.z;
	rotation.a.x = x * x * (1 - cos(angle)) + cos(angle);
	rotation.b.x = x * y * (1 - cos(angle)) - z * sin(angle);
	rotation.c.x = x * z * (1 - cos(angle)) + y * sin(angle);
	rotation.a.y = x * y * (1 - cos(angle)) + z * sin(angle);
	rotation.b.y = y * y * (1 - cos(angle)) + cos(angle);
	rotation.c.y = y * z * (1 - cos(angle)) - x * sin(angle);
	rotation.a.z = x * z * (1 - cos(angle)) - y * sin(angle);
	rotation.b.z = y * z * (1 - cos(angle)) + x * sin(angle);
	rotation.c.z = z * z * (1 - cos(angle)) + cos(angle);
	return (m_mat4set(matrix, m_mat4mul(matrix, &rotation)));
}
