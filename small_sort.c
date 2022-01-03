/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:32:01 by adouib            #+#    #+#             */
/*   Updated: 2022/01/03 20:58:36 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack **a)
{
	t_stack	*head;
	int		min;

	head = (*a);
	min = head->number;
	while (head)
	{
		if (min > head->number)
			min = head->number;
		head = head->next;
	}
	return (min);
}

int	get_next_min(t_stack **a, int min)
{
	t_stack	*head;
	int		next_min;

	head = (*a);
	if (head->number == min)
		next_min = head->next->number;
	else
		next_min = head->number;
	while (head)
	{
		if (next_min > head->number && head->number != min)
			next_min = head->number;
		head = head->next;
	}
	return (next_min);
}

void	sort_three_numbers(t_stack **a)
{
	int		num;
	int		num2;
	int		min;
	int		next_min;

	min = get_min(a);
	next_min = get_next_min(a, min);
	num = (*a)->number;
	num2 = (*a)->next->number;
	if (num == min && num2 != next_min)
		rrs(a);
	else if (num == next_min)
	{
		if (num2 == min)
			s(a, "sa");
		else
			rr(a, "rra");
	}
	else
	{
		if (num2 == min)
			r(a, "ra");
		else if (num2 == next_min)
			srr(a);
	}
}

void	sort_four_numbers(t_stack **a, t_stack **b)
{
	int		num;
	int		min;

	min = get_min(a);
	while (!is_sorted((*a)))
	{
		num = (*a)->number;
		if (num == min)
			p(a, b, "pb");
		else if (stack_size(*a) == 3 && !is_sorted(*a))
			sort_three_numbers(a);
		else
			r(a, "ra");
	}
	while (stack_size(*b))
		p(a, b, "pa");
}

void	sort_five_numbers(t_stack **a, t_stack **b)
{
	int	num;
	int	min;
	int	next_min;

	min = get_min(a);
	next_min = get_next_min(a, min);
	while (!is_sorted((*a)))
	{
		num = (*a)->number;
		if (num == min || num == next_min)
			p(a, b, "pb");
		else if (stack_size(*a) == 3 && !is_sorted(*a))
			sort_three_numbers(a);
		else
			r(a, "ra");
	}
	while (stack_size(*b))
		p(a, b, "pa");
	if (!is_sorted(*a))
		s(a, "sa");
}
