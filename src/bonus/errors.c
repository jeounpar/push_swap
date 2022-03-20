/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:04:52 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 23:19:03 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <unistd.h>
#include <stdlib.h>

void	free_alloc(char **str);

void	ft_errors(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_stdinerror(t_arr *a, t_arr *b, char *line)
{
	free(a->rst);
	free(b->rst);
	free(line);
	ft_errors();
}

int	ft_nullexeption(char **voca)
{
	free_alloc(voca);
	return (0);
}
