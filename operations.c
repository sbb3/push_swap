/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:53 by adouib            #+#    #+#             */
/*   Updated: 2022/01/03 21:04:59 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(t_stack **list, char *s)
{
	t_stack	*next_node;

	next_node = (*list)->next;
	if (stack_size(*list) == 2)
		(*list)->next = NULL;
	else
		(*list)->next = next_node->next;
	next_node->next = (*list);
	(*list) = next_node;
	ft_putstr(s);
}

void	r(t_stack **list, char *s)
{
	t_stack	*tmp;
	t_stack	*node2;

	tmp = (*list);
	node2 = (*list)->next;
	while ((*list)->next)
		(*list) = (*list)->next;
	tmp->next = NULL;
	(*list)->next = tmp;
	(*list) = node2;
	ft_putstr(s);
}

void	rr(t_stack **list, char *s)
{
	t_stack	*tmp;

	tmp = (*list);
	while ((*list)->next)
		(*list) = (*list)->next;
	(*list)->next = tmp;
	(tmp)->next->next = NULL;
	ft_putstr(s);
}

void	p(t_stack **a, t_stack **b, char *s)
{
	if (!ft_strcmp(s, "pa"))
	{
		*a = push_top((*a), (*b)->number);
		*b = delete_top((*b));
	}
	else if (!ft_strcmp(s, "pb"))
	{
		*b = push_top((*b), (*a)->number);
		*a = delete_top(*a);
	}
	ft_putstr(s);
}

void	rrs(t_stack **stack)
{
	rr(stack, "rra");
	s(stack, "sa");
}
