/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 01:40:46 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:42:48 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4cpy(t_vec4 *vector)
{
	t_vec4	*copy;

	copy = (t_vec4 *)malloc(sizeof(t_vec4));
	copy->x = vector->x;
	copy->y = vector->y;
	copy->z = vector->z;
	copy->w = vector->w;
	copy->color = vector->color;
	return (copy);
}
