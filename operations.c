/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:53 by adouib            #+#    #+#             */
/*   Updated: 2021/12/17 17:49:36 by adouib           ###   ########.fr       */
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
void	s(t_stack **list, char *s)
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
void	r(t_stack **list, char *s)
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
void	rr(t_stack **list, char *s)
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

void	rrs(t_stack **stack)
{
	rr(stack, "rra");
	s(stack, "sa");
}

void	srr(t_stack **stack)
{
	s(stack, "sa");
	rr(stack, "rra");
}

// remove strcmp from below

void	p(t_stack **a, t_stack **b, char *s)
{
	if (!strcmp(s, "pa"))
	{
		*a = push_top((*a), (*b)->number);
		*b = delete_top((*b));
	}
	else if (!strcmp(s, "pb"))
	{
		*b = push_top((*b), (*a)->number);
		*a = delete_top(*a);
	}
	ft_putstr(s);
}

/*
3 old
if ((num >> 0 & 1) == 1)
			s(a, "sa");
		else if ((num >> 1 & 1) == 1 || (num >> 1 & 1) == 0)
			r(a, "ra");

*/

/*
OLD

	while (!is_sorted((*a)) && k != 2)
	{
		head = (*a);
		num = head->number;
		if (num == min || num == next_min)
		{
			p(a, b, "pb");

			k++;
			if (k == 2)
				break ;
		}
		else
			r(a, "ra");
	}
	if (!is_sorted(*a))
		sort_three_numbers(a);
	if (is_sorted(*b))
		s(b, "sb");
	while (stack_length(*b))
		p(a, b, "pa");
*/

/*
NEW
	while (!is_sorted((*a)))
	{
		head = (*a);
		num = head->number;
		if ((num == min || num == next_min) && (k != 2))
		{
			p(a, b, "pb");
			k++;
			// if (k == 2)
			// 	break ;
		}
		else if (stack_length(*a) == 3 && !is_sorted(*a))
			sort_three_numbers(a);
		else
			r(a, "ra");
	}

	if (is_sorted(*b))
		s(b, "sb");
	while (stack_length(*b))
		p(a, b, "pa");
*/

/*

int num1 = (*a)->number;
	int num2 = (*a)->next->number;
	int num3 = (*a)->next->next->number;

	if (num1 < num2 && num2 > num3 && num3 > num1)
		sa_ra(a);
	else if (num1 > num2 && num2 < num3 && num3 > num1)
		s(a, "sa");
	else if (num1 < num2 && num2 > num3 && num3 < num1)
		rr(a, "rra");
	else if (num1 > num2 && num2 < num3 && num3 < num1)
		r(a, "ra");
	else if (num1 > num2 && num2 > num3 && num3 < num1)
		sa_rra(a);
*/
