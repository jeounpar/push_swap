/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:10:17 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/05 16:29:19 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

void ft_errors(void);
void free_alloc(char **str);
char **ft_split(char const *s, char c);
int ft_atoi(const char *nptr);
int duplicated_node(t_node *node, int data);
void insert_node(t_node **n, int data);

static void check_input(int argc, char *argv[])
{
	int i;
	int idx;

	i = 1;
	while (i < argc)
	{
		idx = 0;
		while (argv[i][idx] != '\0')
		{
			if ((argv[i][idx] >= '0' && argv[i][idx] <= '9') || argv[i][idx] == ' ')
				;
			else
				ft_errors();
			idx += 1;
		}
		i += 1;
	}
}

static void str_to_int(int argc, char *argv[], t_node **node)
{
	int i;
	int idx;
	int tmp;
	char **arr;

	i = 1;
	while (i < argc)
	{
		arr = ft_split(argv[i], ' ');
		if (arr == NULL)
			exit(1);
		idx = 0;
		while (arr[idx] != NULL)
		{
			tmp = ft_atoi(arr[idx]);
			if (duplicated_node(*node, tmp) != 1)
				ft_errors();
			insert_node(node, tmp);
			idx += 1;
		}
		free_alloc(arr);
		i += 1;
	}
}

void ft_parse(int argc, char *argv[], t_node **node)
{
	check_input(argc, argv);
	str_to_int(argc, argv, node);
}