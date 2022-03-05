/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:58:15 by jeounpar          #+#    #+#             */
/*   Updated: 2022/02/21 01:01:04 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_errors(void);
void	ft_parse(int argc, char *argv[], t_node **node);
void    display_node( t_node *n);
void	circular_node(t_node *n);

int main(int argc, char *argv[])
{
	t_node  *head_node;
	
	if (argc < 2)
		return (0);
	head_node = NULL;
	ft_parse(argc, argv, &head_node);
    // bottom : head_node->prev, top : head_node
    circular_node(head_node);
	display_node(head_node);
	return (0);
}