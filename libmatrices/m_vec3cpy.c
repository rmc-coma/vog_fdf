/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:39:40 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:45:00 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	*m_vec3cpy(t_vec3 *vector)
{
	t_vec3	*copy;

	copy = (t_vec3 *)malloc(sizeof(t_vec3));
	copy->x = vector->x;
	copy->y = vector->y;
	copy->z = vector->z;
	return (copy);
}
