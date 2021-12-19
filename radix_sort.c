/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:55:28 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 11:39:12 by adouib           ###   ########.fr       */
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
	
	i = 0;
	size = stack_length(*a);
	head = (*a);
	while (!is_sorted(*a))
	{
		j = -1;
		while (++j < size - 1)
		{
			head = (*a);
			num = head->number;
			if ((num >> i & 1) == 1)
				r(a, "ra");
			else
				p(a, b, "pb");
		}
		while (stack_length(*b))
			p(a, b, "pa");
		i++;
	}
	
}