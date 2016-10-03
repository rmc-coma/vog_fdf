/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4idt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:53:06 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:49:53 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4idt(void)
{
	t_mat4	matrix;

	matrix = m_mat4ini();
	matrix.a.x = 1;
	matrix.b.y = 1;
	matrix.c.z = 1;
	matrix.d.w = 1;
	return (matrix);
}
