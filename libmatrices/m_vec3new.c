/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec3new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 06:16:49 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:45:05 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec3	*m_vec3new(void)
{
	t_vec3	*vector;

	vector = (t_vec3 *)malloc(sizeof(t_vec3));
	*vector = m_vec3ini();
	return (vector);
}
