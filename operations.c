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
// 3 2
// 2 3
void	sab(t_stack **list, char *s)
{
	t_stack *next_node;

	next_node = (*list)->next;

	(*list)->prev = next_node;
	if (stack_length(*list) == 2)
		(*list)->next = NULL;
	else
	{
		(*list)->next = next_node->next;
		next_node->next->prev = (*list);
	}

	next_node->prev = NULL;
	next_node->next = (*list);
	(*list) = next_node;
	ft_putstr(s);
}

// 312 ra 123
void	rab(t_stack **list, char *s)
{
	t_stack *tmp;
	t_stack *node2;

	tmp = (*list);
	node2 = (*list)->next;

	while ((*list)->next)
		(*list) = (*list)->next;

	tmp->prev = (*list);
	tmp->next = NULL;

	(*list)->next = tmp;

	node2->prev = NULL;
	(*list) = node2;

	ft_putstr(s);
}
// 231 123
void	rrab(t_stack **list, char *s)
{
	t_stack *tmp;

	tmp = (*list);

	while ((*list)->next)
		(*list) = (*list)->next;

	(*list)->next = tmp;
	(*list)->prev = NULL;
	tmp->prev = (*list);

	(tmp)->next->next = NULL;

	ft_putstr(s);
}

void	sa_ra(t_stack **list)
{
	sab(list, "sa");
	rab(list, "ra");
}

void	sa_rra(t_stack **list)
{
	sab(list, "sa");
	rrab(list, "rra");
}

void	pa(t_stack **a, t_stack **b)
{
	*a = push_top((*a), (*b)->number);
	*b = delete_top((*b));
	ft_putstr("pa");
}

void	pb(t_stack **a, t_stack **b)
{
	*b = push_top((*b), (*a)->number);
	*a = delete_top(*a);
	ft_putstr("pb");
}

