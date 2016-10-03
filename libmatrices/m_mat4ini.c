/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:01:42 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:48:06 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4ini(void)
{
	t_mat4	matrix;

	matrix.a = m_vec4ini();
	matrix.b = m_vec4ini();
	matrix.c = m_vec4ini();
	matrix.d = m_vec4ini();
	return (matrix);
}
