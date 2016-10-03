/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 23:47:19 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/15 20:08:41 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/include/libft.h"
# include "libft/include/get_next_line.h"
# include "libmatrices/libmatrices.h"
# include "minilibx/mlx.h"

# include <fcntl.h>
# include <math.h>

# define FALSE 0
# define TRUE !FALSE

# define KEY_ESC	53
# define KEY_W		13
# define KEY_A		0
# define KEY_S		1
# define KEY_D		2
# define KEY_SPACE	49
# define KEY_CTRL	256
# define KEY_SHIFT	257
# define KEY_TAB	48
# define KEY_TILD	50
# define KEY_RETURN 36
# define KEY_UP		126
# define KEY_DOWN	125
# define KEY_LEFT	123
# define KEY_RIGHT	124
# define KEY_DELETE	51
# define KEY_DEL	117
# define KEY_FN		279
# define KEY_HOME	115
# define KEY_PUP	116
# define KEY_END	119
# define KEY_PDOWN	121
# define KEY_ALPLUS	69
# define KEY_ALMIN	78

typedef unsigned int	t_size;
typedef unsigned char	t_bool;

typedef struct			s_norm
{
	double	**a;
	double	**b;
}						t_norm;

typedef struct			s_framebuffer
{
	void	*img_ptr;
	int		*buffer;
	int		*bpp;
	int		*size_line;
	int		*endian;
}						t_fb;

typedef struct			s_mesh
{
	double	*vertices;
	t_size	n_vertices;
}						t_mesh;

typedef struct			s_fdf
{
	void	*mlx_ptr;
	t_size	win_height;
	t_size	win_width;
	void	*win_ptr;
	t_fb	*frame;
	t_mat4	modelview;
	t_mesh	*mesh;
}						t_fdf;

t_size					fdf_parse(const int fd, double **vertices);
int						fdf_expose(t_fdf *ins);
void					fdf_display(double *vertices, t_size size, t_fdf *ins);
void					fdf_draw_line(t_vec2 *vertex1,
									t_vec2 *vertex2, t_fdf *ins);
t_fdf					*fdf_init(t_size win_width, t_size win_height);
int						fdf_input_keyboard(int keycode, t_fdf *ins);
int						fdf_close(t_fdf *ins);

#endif
