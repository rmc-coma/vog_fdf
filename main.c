/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 18:14:39 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/15 20:06:35 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_fdf	*ins;
	int		fd;

	if (argc == 2)
	{
		ins = fdf_init(2560, 1440);
		fd = open(argv[1], O_RDONLY);
		ins->mesh->n_vertices = fdf_parse(fd, &(ins->mesh->vertices));
		close(fd);
		ft_putendl("Parsed successfully");
		mlx_expose_hook(ins->win_ptr, fdf_expose, ins);
		mlx_key_hook(ins->win_ptr, fdf_input_keyboard, ins);
		mlx_loop(ins->mlx_ptr);
	}
	return (0);
}
