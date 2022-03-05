/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:58:15 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/05 17:00:26 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_errors(void);
void	*ft_parse(int argc, char *argv[], t_arr *arr);

int main(int argc, char *argv[])
{
	t_arr arr;
	
	if (argc < 2)
		return (0);
	ft_parse(argc, argv, &arr);
    
	for (int i = 0; i < arr.len; i++)
		printf("%d ", arr.rst[i]);
	printf("\n");
	return (0);
}