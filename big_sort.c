/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:55:28 by adouib            #+#    #+#             */
/*   Updated: 2021/12/21 13:08:54 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(t_stack **a, t_stack **b, int ac)
{
	if (ac <= 3)
		sort_three_numbers(a);
	else if (ac <= 4)
		sort_four_numbers(a, b);
	else
		sort_five_numbers(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int		j;
	int		i;
	int		num;
	int		size;

	i = 0;
	size = stack_size(*a);
	while (!is_sorted(*a))
	{
		j = -1;
		while (++j < size)
		{
			num = (*a)->number;
			if ((num >> i & 1) == 1)
				r(a, "ra");
			else
				p(a, b, "pb");
		}
		while (stack_size(*b))
			p(a, b, "pa");
		i++;
	}
}
