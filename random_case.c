/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:41:22 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/07 01:09:38 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>

int		case_one(t_arr *a, t_arr *arr);
int		case_two(t_arr *a, t_arr *arr);
int		case_three(t_arr *a, t_arr *arr);
int		case_four(t_arr *a, t_arr *arr);
int		case_five(t_arr *a, t_arr *arr);
void	copy_arr(t_arr *src, t_arr *target);

void	two_random_case(t_arr *a)
{
	int	tmp;

	if (a->rst[a->len - 1] > a->rst[a->len - 2])
	{
		tmp = a->rst[a->len - 1];
		a->rst[a->len - 1] = a->rst[a->len - 2];
		a->rst[a->len - 2] = tmp;
		write(1, "ra\n", 3);
	}	
}

void	three_random_case(t_arr *arr)
{
	t_arr	tmp;

	tmp.rst = (int *)malloc(arr->len * sizeof(int));
	copy_arr(arr, &tmp);
	if (case_one(&tmp, arr) == 1)
		return (free(tmp.rst));
	else if (case_two(&tmp, arr) == 1)
		return (free(tmp.rst));
	else if (case_three(&tmp, arr) == 1)
		return (free(tmp.rst));
	else if (case_four(&tmp, arr) == 1)
		return (free(tmp.rst));
	else if (case_five(&tmp, arr) == 1)
		return (free(tmp.rst));
}
