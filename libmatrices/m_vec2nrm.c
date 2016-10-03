/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2nrm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 03:13:50 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/27 03:17:27 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	m_vec2nrm(t_vec2 *vector)
{
	t_vec2	normalized;
	double	magnitude;

	magnitude = m_vec2mag(vector);
	normalized.x = vector->x / magnitude;
	normalized.y = vector->y / magnitude;
	return (normalized);
}
