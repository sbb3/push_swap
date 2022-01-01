/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:55:28 by adouib            #+#    #+#             */
/*   Updated: 2021/12/24 17:54:38 by adouib           ###   ########.fr       */
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
	int	i;
	int	num;
	int	size;

	i = 0;
	while (!is_sorted(*a))
	{
		size = stack_size(*a);
		while (size--)
		{
			num = (*a)->number;
			if ((num >> i & 1) == 1)
				r(a, "ra");
			else
				p(a, b, "pb");
			if (is_sorted(*a))
				break ;
		}
		while (stack_size(*b))
			p(a, b, "pa");
		i++;
	}
}

	
/*

1  01
2  10
3  11
4 100
6 110
0  00

a 1 2 3 4 6 0

b 

*/


// void	radix_sort(t_stack **a, t_stack **b)
// {
// 	int	j;
// 	int	i;
// 	int	num;
// 	int	size;

// 	i = 0;
// 	size = stack_size(*a);
// 	while (!is_sorted(*a))
// 	{
// 		j = -1;
// 		while (++j < size)
// 		{
// 			num = (*a)->number;
// 			if ((num >> i & 1) == 1)
// 				r(a, "ra");
// 			else
// 				p(a, b, "pb");
// 		}
// 		while (stack_size(*b))
// 			p(a, b, "pa");
// 		i++;
// 	}
// }
