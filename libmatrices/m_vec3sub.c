/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3sub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:43:50 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 23:59:25 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3sub(t_vec3 *left, t_vec3 *right)
{
	t_vec3	vector;

	vector.x = left->x - right->x;
	vector.y = left->y - right->y;
	vector.z = left->z - right->z;
	return (vector);
}
