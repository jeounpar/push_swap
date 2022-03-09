/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 00:47:57 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/09 16:38:26 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	b_to_a(t_arr *a, t_arr *b, int r);
int		set_pivot(t_arr *arr, int r);
void	three_random_case(t_arr *arr);
void	five_random_case(t_arr *a, t_arr *b);
void	two_random_case(t_arr *a);
void	p_a(t_arr *a, t_arr *b, int *pa);
void	p_b(t_arr *a, t_arr *b, int *pa);
void	r_a(t_arr *a, int *ra);
void	r_b(t_arr *b, int *rb);

void	rr_a_b(t_arr *a, t_arr *b, int r, int type)
{
	int	idx;

	idx = 0;
	if (type == 0)
	{
		while (idx < r)
		{
			rr_a(a);
			write (1, "rra\n", 4);
			idx++;
		}
	}
	else
	{
		while (idx < r)
		{
			rr_b(b);
			write (1, "rrb\n", 4);
			idx++;
		}
	}
}

void	a_to_b(t_arr *a, t_arr *b, int r)
{
	int	i;
	int	a_pivot;
	int	pb;
	int	ra;

	if (r == 1)
		return ;
	else if (r == 2)
		return (two_random_case(a));
	else if (a->len == 3)
		return (three_random_case(a));
	i = 0;
	a_pivot = set_pivot(a, r);
	ra = 0;
	pb = 0;
	while (r-- > 0)
	{
		if (a->rst[a->len - 1] > a_pivot)
			r_a(a, &ra);
		else
			p_b(a, b, &pb);
	}
	rr_a_b(a, b, ra, 0);
	a_to_b(a, b, ra);
	b_to_a(a, b, pb);
}

void	b_to_a(t_arr *a, t_arr *b, int r)
{
	int	b_pivot;
	int	rb;
	int	pa;

	if (r == 1)
		return (p_a(a, b, &pa));
	pa = 0;
	rb = 0;
	b_pivot = set_pivot(b, r);
	while (r-- > 0)
	{
		if (b->rst[b->len - 1] < b_pivot)
			r_b(b, &rb);
		else
			p_a(a, b, &pa);
	}
	rr_a_b(a, b, rb, 1);
	a_to_b(a, b, pa);
	b_to_a(a, b, rb);
}

void	solve(t_arr *a, t_arr *b, int r)
{
	if (r == 3)
	{
		free(b->rst);
		three_random_case(a);
	}
	else if (r == 5)
	{
		five_random_case(a, b);
		free(b->rst);
	}
	else
	{
		a_to_b(a, b, r);
		free(b->rst);
	}
}
