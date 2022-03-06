/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:01:11 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/07 01:10:22 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_arr *a)
{
	int	tmp;

	if (a->len < 2)
		return ;
	tmp = a->rst[a->len - 1];
	a->rst[a->len - 1] = a->rst[a->len - 2];
	a->rst[a->len - 2] = tmp;
}

void	swap_b(t_arr *b)
{
	int	tmp;

	if (b->len < 2)
		return ;
	tmp = b->rst[b->len - 1];
	b->rst[b->len - 1] = b->rst[b->len - 2];
	b->rst[b->len - 2] = tmp;
}

void	swap_s(t_arr *a, t_arr *b)
{
	swap_a(a);
	swap_b(b);
}
