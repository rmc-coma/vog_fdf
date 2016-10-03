/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4scl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:10:59 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4scl(t_mat4 *matrix, T_MATU x_scl, T_MATU y_scl, T_MATU z_scl)
{
	t_mat4	scale;

	scale = m_mat4idt();
	scale.a.x *= x_scl;
	scale.b.y *= y_scl;
	scale.c.z *= z_scl;
	return (m_mat4set(matrix, m_mat4mul(matrix, &scale)));
}
