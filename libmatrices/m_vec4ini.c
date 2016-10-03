/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4ini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:06:59 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:41:04 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	m_vec4ini(void)
{
	t_vec4	vector;

	vector.x = 0;
	vector.y = 0;
	vector.z = 0;
	vector.w = 0;
	vector.color = 0x00000000;
	return (vector);
}
