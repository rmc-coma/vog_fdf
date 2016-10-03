/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4lat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:19:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/11 13:31:34 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4lat(t_vec3 eye, t_vec3 center, t_vec3 up)
{
	t_vec3	f;
	t_vec3	u;
	t_vec3	s;
	t_mat4	matrix;

	f = m_vec3nrm(m_vec3sub(&center, &eye));
	u = m_vec3nrm(up);
	s = m_vec3nrm(m_vec3crs(&f, &u));
	u = m_vec3crs(&s, &f);
	matrix = m_mat4idt();
	matrix.a.x = s.x;
	matrix.b.x = s.y;
	matrix.c.x = s.z;
	matrix.a.y = u.x;
	matrix.b.y = u.y;
	matrix.c.y = u.z;
	matrix.a.z = (f.x);
	matrix.b.z = (f.y);
	matrix.c.z = (f.z);
	matrix.d.x = (m_vec3dot(&s, &eye));
	matrix.d.y = (m_vec3dot(&u, &eye));
	matrix.d.z = -(m_vec3dot(&f, &eye));
	return (matrix);
}
