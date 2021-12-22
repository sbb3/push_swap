/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:59:52 by adouib            #+#    #+#             */
/*   Updated: 2021/12/20 11:08:11 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((s1[i] - s2[i]));
}

void	ft_error(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
	exit(1);
}

void	ft_sort(int arr[], int n)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	while (++i < n - 1)
	{
		j = -1;
		while (++j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int	*ft_intdup_sorted(int *arr, int len)
{
	int	*buf;
	int	i;

	buf = (int *) malloc(sizeof(int) * len);
	if (!buf)
		return (NULL);
	i = -1;
	while (++i < len)
		buf[i] = arr[i];
	ft_sort(buf, len);
	return (buf);
}
