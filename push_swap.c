/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:58 by adouib            #+#    #+#             */
/*   Updated: 2021/12/20 11:55:44 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char const *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	ac = ac - 1;
	a = stack_init(ac, av);
	if (ac < 6)
		simple_sort(&a, &b, ac);
	else
		radix_sort(&a, &b);
	return (0);
}
