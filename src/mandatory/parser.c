/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:10:17 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 23:27:06 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdlib.h>

void		ft_errors(void);
void		free_alloc(char **str);
char		**ft_split(char const *s, char c);
long long	ft_atoi(const char *nptr);
int			count_int_nums(int argc, char *argv[]);
int			check_duplicated(t_arr *arr);
int			ft_nullexeption(char **voca);

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
				|| argv[i][idx] == ' ' || argv[i][idx] == '-')
				;
			else
				ft_errors();
			idx += 1;
		}
		i += 1;
	}
}

static void	alloc_arr(int argc, char *argv[], t_arr *arr)
{
	int	cnt;

	cnt = count_int_nums(argc, argv);
	arr->len = cnt;
	arr->rst = (int *)malloc(cnt * sizeof(int));
	if (arr->rst == NULL)
		exit(1);
}

static int	max_min_int(long long num)
{
	if (num > 2147483647 || num < -2147483648)
		ft_errors();
	return ((int)num);
}

static int	str_to_int(int argc, char *argv[], t_arr *arr)
{
	char		**voca;
	int			i;
	int			idx;
	int			j;

	i = 1;
	j = arr->len - 1;
	while (i < argc)
	{
		voca = ft_split(argv[i], ' ');
		if (voca == NULL)
			return (0);
		if (voca[0] == NULL)
			return (ft_nullexeption(voca));
		idx = 0;
		while (voca[idx] != NULL)
		{
			arr->rst[j] = max_min_int(ft_atoi(voca[idx]));
			idx += 1;
			j -= 1;
		}
		free_alloc(voca);
		i += 1;
	}
	return (1);
}

void	ft_parse(int argc, char *argv[], t_arr *arr)
{
	int	a;
	int	b;

	check_input(argc, argv);
	alloc_arr(argc, argv, arr);
	a = str_to_int(argc, argv, arr);
	b = check_duplicated(arr);
	if (a == 0 || b == 0)
	{
		free(arr->rst);
		ft_errors();
	}
}
