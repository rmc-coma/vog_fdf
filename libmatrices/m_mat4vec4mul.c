/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4vec4mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 23:03:54 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:09:33 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_mat4vec4mul(t_mat4 *left, t_vec4 *right)
{
	t_vec4	vector;

	vector.x = left->a.x * right->x + left->b.x * right->y +
		left->c.x * right->z + left->d.x * right->w;
	vector.y = left->a.y * right->x + left->b.y * right->y +
		left->c.y * right->z + left->d.y * right->w;
	vector.z = left->a.z * right->x + left->b.z * right->y +
		left->c.z * right->z + left->d.z * right->w;
	vector.w = left->a.w * right->x + left->b.w * right->y +
		left->c.w * right->z + left->d.w * right->w;
	return (vector);
}
