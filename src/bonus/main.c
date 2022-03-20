/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:58:15 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 23:23:49 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/get_next_line.h"
#include <stdlib.h>

void	*ft_parse(int argc, char *argv[], t_arr *arr);
void	solve(t_arr *a, t_arr *b, int r);
int		ft_strcmp(char *s1, char *s2);
void	ft_errors(void);
void	ft_stdinerror(t_arr *a, t_arr *b, char *line);

int	is_already_sorted(t_arr *arr)
{
	int	idx;

	idx = 0;
	while (idx < arr->len - 1)
	{
		if (arr->rst[idx] < arr->rst[idx + 1])
			return (0);
		idx += 1;
	}
	return (1);
}

void	copy_arr(t_arr *src, t_arr *target)
{
	int	i;

	i = 0;
	target->len = src->len;
	while (i < src->len)
	{
		target->rst[i] = src->rst[i];
		i += 1;
	}
}

void	ft_instructions(t_arr *a, t_arr *b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		swap_a(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		swap_b(b);
	else if (ft_strcmp(line, "ss\n") == 0)
		swap_s(a, b);
	else if (ft_strcmp(line, "pa\n") == 0)
		push_a(a, b);
	else if (ft_strcmp(line, "pb\n") == 0)
		push_b(a, b);
	else if (ft_strcmp(line, "ra\n") == 0)
		rotate_a(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rotate_b(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rotate_rr(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rr_a(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rr_b(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rr_rr(a, b);
	else
		ft_stdinerror(a, b, line);
}

int	gnl(t_arr *a, t_arr *b)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		ft_instructions(a, b, line);
		free(line);
		line = NULL;
	}
	if (is_already_sorted(a) == 1)
		return (1);
	else
		return (0);
}

int	main(int argc, char *argv[])
{
	t_arr	a;
	t_arr	b;

	a.len = 0;
	b.len = 0;
	if (argc < 2)
		return (0);
	ft_parse(argc, argv, &a);
	b.rst = (int *)malloc(a.len * sizeof(int));
	if (is_already_sorted(&a) == 1 || b.rst == NULL)
	{
		free(a.rst);
		if (b.rst != NULL)
			free(b.rst);
		return (0);
	}
	if (gnl(&a, &b) == 1)
		write(1, "OK\n", 3);
	else
		write(2, "KO\n", 3);
	free(a.rst);
	free(b.rst);
	system("leaks checker");
	return (0);
}
