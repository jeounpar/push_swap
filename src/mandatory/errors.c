/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:04:52 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/20 23:21:16 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	free_alloc(char **str);

void	ft_errors(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_nullexeption(char **voca)
{
	free_alloc(voca);
	return (0);
}
