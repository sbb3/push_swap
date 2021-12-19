/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_indexed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:59:52 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 18:43:07 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((s1[i] - s2[i]));
}

int	is_duplicated(int arr[], int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac - 1)
		{
			if (arr[i] == arr[j + 1])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	*ft_intdup(int *arr, int len)
{
	int	*buf;
	int	i;

	buf = (int *) malloc(sizeof(int) * len);
	if (!buf)
		return (NULL);
	i = 0;
	while (i < len)
	{
		buf[i] = arr[i];
		i++;
	}
	return (buf);
}

void	ft_swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	ft_sort(int arr[], int n)
{
	int	i;
	int	j;

	i = -1;
	while (++i < n - 1)
	{
		j = -1;
		while (++j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(arr + j, arr + j + 1);
		}
	}
}

int	*stack_indexed(int ac, char const *av[])
{
	int	*arr;
	int	*arr_dup;
	int	*arr_indexed;
	int	i;
	int	j;

	arr = malloc(sizeof(int) * ac);
	if (!arr)
		return (0);
	arr_indexed = malloc(sizeof(int) * ac);
	if (!arr_indexed)
		return (0);
	i = -1;
	while (++i < ac)
		arr[i] = ft_atoi(av[i + 1]);
	if (is_duplicated(arr, ac))
		ft_error("Error");
	i = -1;
	arr_dup = ft_intdup(arr, ac);
	ft_sort(arr_dup, ac);
	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (++j < ac)
		{
			if (arr[i] == arr_dup[j])
				arr_indexed[i] = j;
		}
	}
	free(arr_dup);
	free(arr);
	return (arr_indexed);
}
