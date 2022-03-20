/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_random_case.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:05:12 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 18:31:29 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	copy_arr(t_arr *src, t_arr *target);
void	three_random_case(t_arr *arr);
void	quick_sort(int *data, int start, int end);
void	r_a(t_arr *a);
void	r_b(t_arr *b);
void	p_a(t_arr *a, t_arr *b);
void	p_b(t_arr *a, t_arr *b);

void	push_min_max(t_arr *a, t_arr *b, int min, int max)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (a->rst[a->len - 1] == min || a->rst[a->len - 1] == max)
		{
			push_b(a, b);
			write (1, "pb\n", 3);
		}
		else
		{
			rotate_a(a);
			write (1, "ra\n", 3);
		}
		i++;
	}
}

static void	funcs(t_arr *a, t_arr *b, int max)
{
	if (b->rst[1] == max)
	{
		p_a(a, b);
		r_a(a);
		p_a(a, b);
	}
	else
	{
		p_a(a, b);
		p_a(a, b);
		r_a(a);
	}
}

void	five_random_case(t_arr *a, t_arr *b)
{
	t_arr	tmp;
	int		min;
	int		max;

	tmp.rst = (int *)malloc(5 * sizeof(int));
	if (tmp.rst == NULL)
		return ;
	copy_arr(a, &tmp);
	quick_sort(tmp.rst, 0, 4);
	min = tmp.rst[0];
	max = tmp.rst[4];
	free(tmp.rst);
	push_min_max(a, b, min, max);
	three_random_case(a);
	funcs(a, b, max);
}
