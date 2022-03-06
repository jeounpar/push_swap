/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_opertaion.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:11:29 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/07 01:10:06 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_arr *a, int *ra)
{
	int	tmp;
	int	i;

	tmp = a->rst[a->len - 1];
	i = a->len - 2;
	while (i > -1)
	{
		a->rst[i + 1] = a->rst[i];
		i -= 1;
	}
	a->rst[0] = tmp;
	*ra += 1;
}

void	rotate_b(t_arr *b, int *rb)
{
	int	tmp;
	int	i;

	tmp = b->rst[b->len - 1];
	i = b->len - 2;
	while (i > -1)
	{
		b->rst[i + 1] = b->rst[i];
		i -= 1;
	}
	b->rst[0] = tmp;
	*rb += 1;
}

void	rotate_rr(t_arr *a, t_arr *b)
{
	int	r;

	r = 0;
	rotate_a(a, &r);
	rotate_b(b, &r);
}
