/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:24:15 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 18:23:14 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_arr
{
	int	*rst;
	int	len;
}	t_arr;

void	swap_a(t_arr *a);
void	swap_b(t_arr *b);
void	swap_s(t_arr *a, t_arr *b);
void	push_a(t_arr *a, t_arr *b);
void	push_b(t_arr *a, t_arr *b);
void	rr_a(t_arr *a);
void	rr_b(t_arr *b);
void	rr_rr(t_arr *a, t_arr *b);
void	rotate_a(t_arr *a);
void	rotate_b(t_arr *b);
void	rotate_rr(t_arr *a, t_arr *b);

#endif