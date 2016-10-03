/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:31:27 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 00:07:59 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4sub(t_mat4 *left, t_mat4 *right)
{
	t_mat4	matrix;

	matrix.a = m_vec4sub(&(left->a), &(right->a));
	matrix.b = m_vec4sub(&(left->b), &(right->b));
	matrix.c = m_vec4sub(&(left->c), &(right->c));
	matrix.d = m_vec4sub(&(left->d), &(right->d));
	return (matrix);
}
