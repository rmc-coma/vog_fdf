/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3crs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 13:19:11 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 00:02:16 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3crs(t_vec3 *left, t_vec3 *right)
{
	t_vec3	vector;

	vector.x = left->y * right->z - left->z * right->y;
	vector.y = left->z * right->x - left->x * right->z;
	vector.z = left->x * right->y - left->y * right->x;
	return (vector);
}
