/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:09:51 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:49:00 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	m_mat4val(t_vec4 first, t_vec4 second, t_vec4 third, t_vec4 fourth)
{
	t_mat4	matrix;

	matrix.a = first;
	matrix.b = second;
	matrix.c = third;
	matrix.d = fourth;
	return (matrix);
}
