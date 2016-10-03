/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3cos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 10:35:40 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/11 10:48:37 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

double	m_vec3cos(t_vec3 *left, t_vec3 *right)
{
	return (m_vec3dot(left, right) / (m_vec3mag(left) * m_vec3mag(right)));
}
