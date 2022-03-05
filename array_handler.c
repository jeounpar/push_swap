/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:13:37 by jeounpar          #+#    #+#             */
/*   Updated: 2022/03/05 16:24:40 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_ok(char c, char set);
int	cnt_word(char *str, char set);

int	count_int_nums(int argc, char *argv[])
{
	int i;
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

int main(int argc, char *argv[])
{
	printf("%d\n", count_int_nums(argc, argv));

	return 0;
}
