/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:53:45 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 18:44:24 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stack_init(int ac, char const *av[])
{
	t_stack	*a;
	int		*arr;
	int		num;
	int		size;

	a = NULL;
	size = ac - 1;
	arr = (int *) malloc(sizeof(int) * ac);
	if (!arr)
		return (0);
	arr = stack_indexed(ac, av);
	while (size != -1)
	{
		a = push_top(a, arr[size]);
		size--;
	}
	free(arr);
	if (is_sorted(a))
		exit(1);
	return (a);
}
