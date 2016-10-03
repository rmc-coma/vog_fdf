/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:08:10 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/24 22:46:29 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	*m_vec2cpy(t_vec2 *vector)
{
	t_vec2	*copy;

	copy = (t_vec2 *)malloc(sizeof(t_vec2));
	copy->x = vector->x;
	copy->y = vector->y;
	return (copy);
}
