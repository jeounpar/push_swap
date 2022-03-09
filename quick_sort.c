/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:51:39 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/09 15:37:46 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

static void	swap_data(int *data, int temp, int pivot, int j)
{
	temp = data[j];
	data[j] = data[pivot];
	data[pivot] = temp;
}

void	quick_sort(int *data, int start, int end)
{
	int	pivot;
	int	i;
	int	j;
	int	temp;

	temp = 0;
	if (start >= end)
		return ;
	pivot = start;
	i = pivot + 1;
	j = end;
	while (i <= j)
	{
		while (i <= end && data[i] <= data[pivot])
			i += 1;
		while (j > start && data[j] >= data[pivot])
			j -= 1;
		if (i > j)
			swap_data(data, temp, pivot, j);
		else
			swap_data(data, temp, j, i);
	}
	quick_sort(data, start, j - 1);
	quick_sort(data, j + 1, end);
}

int	set_pivot(t_arr *arr, int r)
{
	int	*tmp;
	int	pivot;
	int	i;

	tmp = (int *)malloc(r * sizeof(int));
	if (tmp == NULL)
		exit(1);
	i = 0;
	while (i < r)
	{
		tmp[i] = arr->rst[arr->len - 1 - i];
		i++;
	}
	quick_sort(tmp, 0, r - 1);
	pivot = tmp[r / 2];
	free(tmp);
	return (pivot);
}
