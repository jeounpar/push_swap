/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:48:22 by jeounpar          #+#    #+#             */
/*   Updated: 2022/02/21 01:02:09 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void insert_node(t_node **n, int data)
{
	t_node *new_node = (t_node *)malloc(sizeof(t_node));
	t_node *temp = *n;
	t_node *cur = *n;

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->data = data;
	if (temp == NULL)
	{
		*n = new_node;
		return;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

void	circular_node(t_node *n)
{
	t_node	*temp = n;
	t_node	*cur = n;

	while (1)
	{
		if (temp->next == NULL)
		{
			cur->prev = temp;
			temp->next = cur;
			break ;
		}
		temp = temp->next;
	}
}

int duplicated_node(t_node *n, int data)
{
	t_node *temp = n;

	while (temp != NULL)
	{
		if (temp->data == data)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void    display_node(t_node *n)
{
	t_node  *temp = n;

	temp = temp->prev;
	while(1)
	{
		printf("%d", temp->data);
		if (temp != n)
			printf(" ");
		else
		{
			printf("\n");
			break ;
		}
		temp    = temp->prev;
	}
}