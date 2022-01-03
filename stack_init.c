/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:53:45 by adouib            #+#    #+#             */
/*   Updated: 2022/01/03 21:20:17 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *list)
{
	t_stack	*next_node;

	while (list->next != NULL)
	{
		next_node = list->next;
		if (list->number > next_node->number)
			return (0);
		list = list->next;
	}
	return (1);
}

int	is_duplicated(int arr[], int ac)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac)
	{
		j = i;
		while (j < ac - 1)
		{
			if (arr[i] == arr[j + 1])
				return (1);
			j++;
		}
	}
	return (0);
}

int	*stack_indexed(int ac, char const *av[])
{
	int	*arr;
	int	*arr_sorted;
	int	*arr_indexed;
	int	i;

	arr = malloc(sizeof(int) * ac);
	if (!arr)
		return (0);
	i = -1;
	while (++i < ac)
		arr[i] = ft_atoi(av[i + 1]);
	arr_sorted = arr_sorting(arr, ac);
	arr_indexed = arr_indexing(arr, arr_sorted, ac);
	free(arr);
	free(arr_sorted);
	return (arr_indexed);
}

t_stack	*stack_init(int ac, char const *av[])
{
	t_stack	*a;
	int		*arr;
	int		size;

	a = NULL;
	size = ac - 1;
	arr = stack_indexed(ac, av);
	if (is_duplicated(arr, ac))
		ft_error("Error");
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

int	*arr_indexing(int *arr, int *arr_sorted, int ac)
{
	int	*arr_indexed;
	int	i;
	int	j;

	arr_indexed = malloc(sizeof(int) * ac);
	if (!arr_indexed)
		return (0);
	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (++j < ac)
			if (arr[i] == arr_sorted[j])
				arr_indexed[i] = j;
	}
	return (arr_indexed);
}
