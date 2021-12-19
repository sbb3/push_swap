/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:46:18 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 10:54:28 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


void	radix_sort(t_stack **a, t_stack **b)
{
	t_stack *head;
	int j;
	int i;
	int num;
	int size;
	
	j = -1;
	i = 0;
	size = stack_length(*a);
	head = (*a);
	while (!is_sorted(a))
	{
		while (++j < size)
		{
			head = (*a);
			num = head->number;
			if ((num >> i && 1) == 1)
				r(a, "ra");
			else
				p(a, p, "pb");
		}
		while (stack_length(*b))
			p(a, b, "pa");
		i++;
	}
	
}

/*
1. point to the numbers as index 0 1 2 3 4 ...
to easily sort them

2. calculate how many passes or bits in the max number

2.1 calculate the length of the list

3. check first bit digit if it is 0 push it to stack b
else rotate it,
finally push back all to stack a,

while (i < max_bits)
{
	while (j < len)
	{
		
	}
}


*/
