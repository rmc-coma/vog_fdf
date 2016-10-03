/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:43:50 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 01:16:15 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_vec4sub(t_vec4 *left, t_vec4 *right)
{
	t_vec4	vector;

	vector.x = left->x - right->x;
	vector.y = left->y - right->y;
	vector.z = left->z - right->z;
	vector.w = left->w - right->w;
	return (vector);
}
