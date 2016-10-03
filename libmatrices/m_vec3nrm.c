/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3nrm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:51:00 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 23:59:59 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	m_vec3nrm(t_vec3 vector)
{
	double	magnitude;
	t_vec3	normalized;

	magnitude = m_vec3mag(&vector);
	normalized.x = vector.x / magnitude;
	normalized.y = vector.y / magnitude;
	normalized.z = vector.z / magnitude;
	return (normalized);
}
