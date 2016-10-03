/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4mul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 22:18:53 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:41:34 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

static t_mat4	m_mat4mul2(t_mat4 m, t_mat4 *l, t_mat4 *r)
{
	m.a.z = l->a.z * r->a.x + l->b.z * r->a.y +
		l->c.z * r->a.z + l->d.z * r->a.w;
	m.b.z = l->a.z * r->b.x + l->b.z * r->b.y +
		l->c.z * r->b.z + l->d.z * r->b.w;
	m.c.z = l->a.z * r->c.x + l->b.z * r->c.y +
		l->c.z * r->c.z + l->d.z * r->c.w;
	m.d.z = l->a.z * r->d.x + l->b.z * r->d.y +
		l->c.z * r->d.z + l->d.z * r->d.w;
	m.a.w = l->a.w * r->a.x + l->b.w * r->a.y +
		l->c.w * r->a.z + l->d.w * r->a.w;
	m.b.w = l->a.w * r->b.x + l->b.w * r->b.y +
		l->c.w * r->b.z + l->d.w * r->b.w;
	m.c.w = l->a.w * r->c.x + l->b.w * r->c.y +
		l->c.w * r->c.z + l->d.w * r->c.w;
	m.d.w = l->a.w * r->d.x + l->b.w * r->d.y +
		l->c.w * r->d.z + l->d.w * r->d.w;
	return (m);
}

t_mat4			m_mat4mul(t_mat4 *l, t_mat4 *r)
{
	t_mat4	m;

	m.a.x = l->a.x * r->a.x + l->b.x * r->a.y +
		l->c.x * r->a.z + l->d.x * r->a.w;
	m.b.x = l->a.x * r->b.x + l->b.x * r->b.y +
		l->c.x * r->b.z + l->d.x * r->b.w;
	m.c.x = l->a.x * r->c.x + l->b.x * r->c.y +
		l->c.x * r->c.z + l->d.x * r->c.w;
	m.d.x = l->a.x * r->d.x + l->b.x * r->d.y +
		l->c.x * r->d.z + l->d.x * r->d.w;
	m.a.y = l->a.y * r->a.x + l->b.y * r->a.y +
		l->c.y * r->a.z + l->d.y * r->a.w;
	m.b.y = l->a.y * r->b.x + l->b.y * r->b.y +
		l->c.y * r->b.z + l->d.y * r->b.w;
	m.c.y = l->a.y * r->c.x + l->b.y * r->c.y +
		l->c.y * r->c.z + l->d.y * r->c.w;
	m.d.y = l->a.y * r->d.x + l->b.y * r->d.y +
		l->c.y * r->d.z + l->d.y * r->d.w;
	return (m_mat4mul2(m, l, r));
}
