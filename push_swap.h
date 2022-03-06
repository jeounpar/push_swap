/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:24:15 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/07 01:03:20 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_arr
{
	int	*rst;
	int	len;
}	t_arr;

typedef struct s_ints
{
	int	samll_pivot;
	int	large_pivot;
}	t_ints;

void	swap_a(t_arr *a);
void	swap_b(t_arr *b);
void	swap_s(t_arr *a, t_arr *b);
void	push_a(t_arr *a, t_arr *b, int *pa);
void	push_b(t_arr *a, t_arr *b, int *pb);
void	rr_a(t_arr *a);
void	rr_b(t_arr *b);
void	rr_rr(t_arr *a, t_arr *b);
void	rotate_a(t_arr *a, int *ra);
void	rotate_b(t_arr *b, int *rb);
void	rotate_rr(t_arr *a, t_arr *b);

#endif