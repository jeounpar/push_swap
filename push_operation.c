/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:12 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/06 23:57:18 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_arr *a, t_arr *b, int *pa)
{
	if (b->len == 0)
		return ;
	a->rst[a->len] = b->rst[b->len - 1];
	b->rst[b->len - 1] = 0;
	a->len += 1;
	b->len -= 1;
	*pa += 1;
}

void	push_b(t_arr *a, t_arr *b, int *pb)
{
	if (a->len == 0)
		return ;
	b->rst[b->len] = a->rst[a->len - 1];
	a->rst[a->len - 1] = 0;
	a->len -= 1;
	b->len += 1;
	*pb += 1;
}
