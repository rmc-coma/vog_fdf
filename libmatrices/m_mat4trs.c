/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4trs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 02:36:22 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:10:28 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4trs(t_mat4 *matrix, T_MATU x_trs, T_MATU y_trs, T_MATU z_trs)
{
	t_mat4	translation;

	translation = m_mat4idt();
	translation.d.x += x_trs;
	translation.d.y += y_trs;
	translation.d.z += z_trs;
	return (m_mat4set(matrix, m_mat4mul(matrix, &translation)));
}
