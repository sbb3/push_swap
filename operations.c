/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:53 by adouib            #+#    #+#             */
/*   Updated: 2021/12/12 18:13:03 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
node2 node1 node3

node2->prev = NULL;
node2->next = node1;
node1->prev = node2;
node1->next = node3;

*/
void	sa(t_stack *list)
{
	t_stack *current_node;
	t_stack *next_node;

	current_node = list;
	next_node = list->next;

	current_node->prev = next_node;
	current_node->next = next_node->next;
	
	next_node->prev = NULL;
	next_node->next = current_node;
	list = next_node;
	fprintf(stderr, "im in sa function\n");

}

// void	sb(t_stack *list)
// {

// }

// void	ra(t_stack *list)
// {

// }

// void	rb(t_stack *list)
// {
	
// }

// void	rra(t_stack *list)
// {
	
// }

// void	rrb(t_stack *list)
// {
	
// }

// void	sa_ra(t_stack *list)
// {
// 	sa(list);
// 	ra(list);
// }

// void	sa_rra(t_stack *list)
// {
// 	sa(list);
// 	rra(list);
// }