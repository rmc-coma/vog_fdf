/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3mag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:48:32 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/25 00:00:29 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

double	m_vec3mag(t_vec3 *vector)
{
	return (sqrt((vector->x * vector->x) +
				(vector->y * vector->y) +
				(vector->z * vector->z)));
}
