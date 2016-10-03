/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:31:27 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 00:06:51 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4add(t_mat4 *left, t_mat4 *right)
{
	t_mat4	matrix;

	matrix.a = m_vec4add(&(left->a), &(right->a));
	matrix.b = m_vec4add(&(left->b), &(right->b));
	matrix.c = m_vec4add(&(left->c), &(right->c));
	matrix.d = m_vec4add(&(left->d), &(right->d));
	return (matrix);
}
