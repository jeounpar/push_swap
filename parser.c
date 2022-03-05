/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:10:17 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/05 17:05:00 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_errors(void);
void	free_alloc(char **str);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *nptr);
int		count_int_nums(int argc, char *argv[]);
int		check_duplicated(t_arr *arr);

static void	check_input(int argc, char *argv[])
{
	int	i;
	int	idx;

	i = 1;
	while (i < argc)
	{
		idx = 0;
		while (argv[i][idx] != '\0')
		{
			if ((argv[i][idx] >= '0' && argv[i][idx] <= '9')
				|| argv[i][idx] == ' ')
				;
			else
				ft_errors();
			idx += 1;
		}
		i += 1;
	}
}

static int	*alloc_arr(int argc, char *argv[], t_arr *arr)
{
	int	cnt;
	int	*rst;

	cnt = count_int_nums(argc, argv);
	arr->len = cnt;
	rst = (int *)malloc(cnt * sizeof(int));
	if (rst == NULL)
		exit(1);
	return (rst);
}

static void	str_to_int(int argc, char *argv[], int *rst, t_arr *arr)
{
	char	**voca;
	int		i;
	int		idx;
	int		j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		voca = ft_split(argv[i], ' ');
		if (voca == NULL)
			exit(1);
		idx = 0;
		while (voca[idx] != NULL)
		{
			rst[j] = ft_atoi(voca[idx]);
			idx += 1;
			j += 1;
		}
		free_alloc(voca);
		i += 1;
	}
	arr->rst = rst;
}

void	ft_parse(int argc, char *argv[], t_arr *arr)
{
	int	*rst;

	check_input(argc, argv);
	rst = alloc_arr(argc, argv, arr);
	str_to_int(argc, argv, rst, arr);
	if (check_duplicated(arr) != 1)
	{
		free(arr->rst);
		ft_errors();
	}
}
