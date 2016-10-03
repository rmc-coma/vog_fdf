/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_mat4new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 16:22:29 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/02/10 17:46:12 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmatrices.h"

t_mat4	*m_mat4new(void)
{
	t_mat4	*matrix;

	matrix = (t_mat4 *)malloc(sizeof(t_mat4));
	*matrix = m_mat4ini();
	return (matrix);
}
