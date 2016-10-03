/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/24 00:03:25 by rmc-coma          #+#    #+#             */
/*   Updated: 2016/03/15 19:49:25 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		fdf_norm(t_norm ffs, t_size n, t_size o, t_size k)
{
	t_size			i;
	t_size			j;

	i = 0;
	while (i++ < n - 1)
	{
		j = 0;
		while (j++ < o - 1)
		{
			k = 0;
			while (k++ < 3)
			{
				(*ffs.a)[(j - 1) * 12 + (i - 1) * (o - 1) * 12 + k - 1] =
					(*ffs.b)[(j - 1) * 3 + k - 1 + 3 + (i - 1) * o * 3];
				(*ffs.a)[(j - 1) * 12 + (i - 1) * (o - 1) * 12 + k - 1 + 3] =
					(*ffs.b)[(j - 1) * 3 + k - 1 + (i - 1) * o * 3];
				(*ffs.a)[(j - 1) * 12 + (i - 1) * (o - 1) * 12 + k - 1 + 6] =
					(*ffs.b)[(j - 1) * 3 + k - 1 + ((i - 1) + 1) * o * 3];
				(*ffs.a)[(j - 1) * 12 + (i - 1) * (o - 1) * 12 + k - 1 + 9] =
					(*ffs.b)[(j - 1) * 3 + k - 1 + 3 + ((i - 1) + 1) * o * 3];
			}
		}
	}
}

static t_size	fdf_arrtoquads(double **ver, t_size n, t_size o)
{
	t_size			k;
	t_norm			ffs;
	double			*new_array;

	k = 0;
	new_array = (double *)malloc(sizeof(double) * (n - 1) * (o - 1) * 3 * 4);
	ffs.a = &new_array;
	ffs.b = ver;
	fdf_norm(ffs, n, o, k);
	free(*ver);
	*ver = new_array;
	return ((n - 1) * (o - 1) * 4);
}

static t_size	fdf_lsttoarr(t_list **lst, t_size n, t_size o, double **ver)
{
	t_size			i;
	t_size			j;
	t_size			k;
	t_list			*next;

	*ver = (double *)malloc(sizeof(double) * n * o * 3);
	k = 0;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < o)
		{
			(*ver)[k++] = (double)(j++) * 10.0 - (double)(o - 1) * 10.0 / 2.0;
			(*ver)[k++] = (double)(ft_atoi((char *)((*lst)->content))) / 20.0;
			(*ver)[k++] = (double)(i) * 10.0 - (double)(n - 1) * 10.0 / 2.0;
			next = (*lst)->next;
			free(*lst);
			*lst = next;
		}
		i++;
	}
	return (fdf_arrtoquads(ver, n, o));
}

static int		fdf_line_checker(long j, int is_check)
{
	static long		k = 0;

	if (k == 0 && j == 0)
	{
		ft_putendl("Empty file");
		exit(EXIT_FAILURE);
	}
	if (k == 0 && is_check)
		k = j;
	else if ((is_check == 1 && j != k) || (is_check == 0 && j == -1))
	{
		ft_putendl("Invalid file");
		exit(EXIT_FAILURE);
		return (0);
	}
	return (j);
}

t_size			fdf_parse(const int fd, double **vertices)
{
	t_list			*lines;
	char			*line;
	char			**itm;
	t_size			i;
	t_size			j;

	line = NULL;
	lines = NULL;
	itm = NULL;
	i = 0;
	while (fdf_line_checker(get_next_line(fd, &line), 0))
	{
		itm = ft_strsplit(line, ' ');
		j = 0;
		while (itm[j] != NULL)
		{
			ft_lstapp(&lines, ft_lstnew((void *)(itm[j]), ft_strlen(itm[j])));
			free(itm[j]);
			j++;
		}
		fdf_line_checker((long)j, 1);
		free(itm);
		i++;
	}
	return (fdf_lsttoarr(&lines, i, j, vertices));
}
