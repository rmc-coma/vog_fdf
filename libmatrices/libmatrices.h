/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmatrices.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 21:39:16 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/14 20:21:13 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATRICES_H
# define LIBMATRICES_H

# include <stdlib.h>
# include <math.h>

/*
** t_matu == Variable type which globally defines for a project the
** type of vars stored in the matrices, "type of matrix unit"
*/

# define T_MATU double

/*
** Custom types
*/

typedef unsigned int	t_size;

/*
** Matrices structures
*/

typedef struct			s_vec4
{
	T_MATU			x;
	T_MATU			y;
	T_MATU			z;
	T_MATU			w;
	int				color;
}						t_vec4;

typedef struct			s_mat4
{
	t_vec4			a;
	t_vec4			b;
	t_vec4			c;
	t_vec4			d;
}						t_mat4;

typedef struct			s_vec3
{
	T_MATU			x;
	T_MATU			y;
	T_MATU			z;
}						t_vec3;

typedef struct			s_vec2
{
	T_MATU			x;
	T_MATU			y;
	int				color;
}						t_vec2;

/*
** Basic Functions
*/

t_vec4					m_vec4ini(void);
t_vec4					m_vec4val(T_MATU x, T_MATU y, T_MATU z, T_MATU w);
t_vec4					*m_vec4new(void);
t_vec4					*m_vec4set(t_vec4 *vector, t_vec4 values);
t_vec4					*m_vec4cpy(t_vec4 *vector);
t_vec3					*m_vec4to3(t_vec4 *src, t_vec3 *dst);

t_vec3					m_vec3ini(void);
t_vec3					m_vec3val(T_MATU x, T_MATU y, T_MATU z);
t_vec3					*m_vec3new(void);
t_vec3					*m_vec3set(t_vec3 *vector, t_vec3 values);
t_vec3					*m_vec3cpy(t_vec3 *vector);
t_vec2					*m_vec3to2(t_vec3 *src, t_vec2 *dst);

t_vec2					m_vec2ini(void);
t_vec2					m_vec2val(T_MATU x, T_MATU y);
t_vec2					*m_vec2new(void);
t_vec2					*m_vec2set(t_vec2 *vector, t_vec2 values);
t_vec2					*m_vec2cpy(t_vec2 *vector);

t_mat4					m_mat4ini(void);
t_mat4					m_mat4val(t_vec4 first, t_vec4 second,
									t_vec4 third, t_vec4 fourth);
t_mat4					m_mat4idt(void);
t_mat4					m_mat4lat(t_vec3 eye, t_vec3 center, t_vec3 up);
t_mat4					m_mat4pro(double angle, double ratio,
								double near, double far);
t_mat4					*m_mat4new(void);
t_mat4					*m_mat4set(t_mat4 *matrix, t_mat4 values);
t_mat4					*m_mat4cpy(t_mat4 *matrix);

/*
** Operations functions
*/

double					m_vec2mag(t_vec2 *vector);
t_vec2					m_vec2nrm(t_vec2 *vector);
t_vec2					m_vec2add(t_vec2 *left, t_vec2 *right);
t_vec2					m_vec2sub(t_vec2 *left, t_vec2 *right);

t_vec3					m_vec3add(t_vec3 *left, t_vec3 *right);
t_vec3					m_vec3sub(t_vec3 *left, t_vec3 *right);
t_vec3					m_vec3nrm(t_vec3 vector);

double					m_vec3mag(t_vec3 *vector);
double					m_vec3dot(t_vec3 *left, t_vec3 *right);
double					m_vec3cos(t_vec3 *left, t_vec3 *right);
double					m_vec3ang(t_vec3 *left, t_vec3 *right);
t_vec3					m_vec3crs(t_vec3 *left, t_vec3 *right);

t_vec4					m_vec4add(t_vec4 *left, t_vec4 *right);
t_vec4					m_vec4sub(t_vec4 *left, t_vec4 *right);

t_mat4					m_mat4add(t_mat4 *left, t_mat4 *right);
t_mat4					m_mat4sub(t_mat4 *left, t_mat4 *right);
t_mat4					m_mat4mul(t_mat4 *l, t_mat4 *r);

/*
** Special operations functions
*/

t_vec4					m_mat4vec4mul(t_mat4 *left, t_vec4 *right);

/*
** Transformations functions
*/

t_mat4					*m_mat4trs(t_mat4 *matrix,
								T_MATU x_trs, T_MATU y_trs, T_MATU z_trs);
t_mat4					*m_mat4scl(t_mat4 *matrix,
								T_MATU x_scl, T_MATU y_scl, T_MATU z_scl);
t_mat4					*m_mat4rot(t_mat4 *matrix, float angle, t_vec3 axle);

#endif
