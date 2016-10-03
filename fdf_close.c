/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_close.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 19:44:23 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/14 19:53:23 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	fdf_close(t_fdf *ins)
{
	mlx_clear_window(ins->mlx_ptr, ins->win_ptr);
	mlx_destroy_image(ins->mlx_ptr, ins->frame->img_ptr);
	mlx_destroy_window(ins->mlx_ptr, ins->win_ptr);
	free(ins->frame);
	free(ins->mesh->vertices);
	free(ins->mesh);
	exit(EXIT_SUCCESS);
	return (0);
}
