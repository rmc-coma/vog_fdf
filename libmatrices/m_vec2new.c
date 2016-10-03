/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 06:16:49 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:45:30 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	*m_vec2new(void)
{
	t_vec2	*vector;

	vector = (t_vec2 *)malloc(sizeof(t_vec2));
	*vector = m_vec2ini();
	return (vector);
}
