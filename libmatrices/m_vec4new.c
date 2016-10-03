/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec4new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 21:04:49 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:43:23 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec4	*m_vec4new(void)
{
	t_vec4	*vector;

	vector = (t_vec4 *)malloc(sizeof(t_vec4));
	*vector = m_vec4ini();
	return (vector);
}
