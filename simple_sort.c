#include "push_swap.h"
// 4 2  1 0 3
int	get_min(t_stack **a)
{
	t_stack *head;
	int min;

	head = (*a);
	min = head->number;
	while (head)
	{
		if (min > head->number)
			min = head->number;
		head = head->next;
	}
	return min;
}
int	get_next_min(t_stack **a, int min)
{
	t_stack *head;
	int next_min;

	head = (*a);
	// 0 3 2 1 4
	// if min = head->number, point next_min to another number, so you get infinite loop
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
	return next_min;
}
void sort_three_numbers(t_stack **a)
{
	t_stack *head;

	int num;
	int min;
	int next_min;
	head = (*a);
	min = get_min(a);
	next_min = get_next_min(a, min);
	num = head->number;
	int num2 = head->next->number;

	if (num == min && num2 != next_min)
		rrs(a);
	else if (num == next_min || num2 == min)
	{
		if (num2 == min)
			s(a, "sa");
		else
			rr(a, "rra");
	}
	else
	{
		if (num2 == min)
			rr(a, "rra");
		else if (num2 == next_min)
			srr(a);
	}

}

void sort_four_numbers(t_stack **a, t_stack **b)
{
	t_stack *head;

	int num;
	int min;
	head = (*a);
	min = get_min(a);
	while (!is_sorted((*a)))
	{
		head = (*a);
		num = head->number;
		if (num == min)
			p(a, b, "pb");
		else if (stack_length(*a) == 3 && !is_sorted(*a))
			sort_three_numbers(a);
		else
			r(a, "ra");
	}
	while (stack_length(*b))
		p(a, b, "pa");
}

void sort_five_numbers(t_stack **a, t_stack **b)
{
	t_stack *head;

	int num;
	int min;
	int next_min;
	head = (*a);
	min = get_min(a);
	next_min = get_next_min(a, min);
	while (!is_sorted((*a)))
	{
		head = (*a);
		num = head->number;
		if (num == min || num == next_min)
			p(a, b, "pb");
		else if (stack_length(*a) == 3 && !is_sorted(*a))
			sort_three_numbers(a);
		else
			r(a, "ra");
	}
	if (is_sorted(*b))
		s(b, "sb");
	while (stack_length(*b))
		p(a, b, "pa");
}

void	simple_sort(t_stack **a, t_stack **b, int ac)
{
	if (ac <= 3)
		sort_three_numbers(a);
	else if (ac <= 4)
		sort_four_numbers(a, b);
	else
		sort_five_numbers(a, b);
}
/*
4 100
0  00
3  11
1  01
2  10



*/
