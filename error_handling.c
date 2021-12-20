/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:31:34 by adouib            #+#    #+#             */
/*   Updated: 2021/12/20 10:03:53 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'\
	|| c == '\f' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *s)
{
	long			num;
	size_t			i;
	int				k;
	int				sign;

	sign = 1;
	num = 0;
	i = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign *= -1;
	k = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i++] - '0');
		k = 1;
	}
	if (num > INT_MAX || num < INT_MIN)
		ft_error("Error");
	if (k == 0)
		ft_error("Error");
	return (sign * num);
}
