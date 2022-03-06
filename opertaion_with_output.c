/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opertaion_with_output.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:46:39 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/07 01:02:47 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	p_a(t_arr *a, t_arr *b, int *pa)
{
	push_a(a, b, pa);
	write(1, "pa\n", 3);
}

void	p_b(t_arr *a, t_arr *b, int *pa)
{
	push_b(a, b, pa);
	write(1, "pa\n", 3);
}

void	r_a(t_arr *a, int *ra)
{
	rotate_a(a, ra);
	write(1, "rb\n", 3);
}

void	r_b(t_arr *b, int *rb)
{
	rotate_b(b, rb);
	write(1, "rb\n", 3);
}
