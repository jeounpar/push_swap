/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:13:37 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 22:14:19 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	cnt_word(char *str, char set);

int	count_int_nums(int argc, char *argv[])
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (i < argc)
	{
		result += cnt_word(argv[i], ' ');
		i += 1;
	}
	return (result);
}

int	check_duplicated(t_arr *arr)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr->len - 1)
	{
		j = i + 1;
		while (j < arr->len)
		{
			if (arr->rst[i] == arr->rst[j])
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}
