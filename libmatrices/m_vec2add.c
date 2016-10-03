/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_vec2add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 09:38:35 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/11 18:27:16 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_vec2	m_vec2add(t_vec2 *left, t_vec2 *right)
{
	t_vec2	vector;

	vector.x = left->x + right->x;
	vector.y = left->y + right->y;
	vector.color = left->color;
	return (vector);
}
