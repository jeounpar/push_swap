/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opertaion_with_output.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:46:39 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 22:14:19 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <unistd.h>

void	p_a(t_arr *a, t_arr *b)
{
	push_a(a, b);
	write(1, "pa\n", 3);
}

void	p_b(t_arr *a, t_arr *b)
{
	push_b(a, b);
	write(1, "pb\n", 3);
}

void	r_a(t_arr *a)
{
	rotate_a(a);
	write(1, "ra\n", 3);
}

void	r_b(t_arr *b)
{
	rotate_b(b);
	write(1, "rb\n", 3);
}
