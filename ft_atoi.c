/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 10:31:34 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 12:53:56 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	ft_atoi(const char *s)
// {
// 	unsigned long	num;
// 	int			k;
// 	int				sign;

// 	sign = 1;
// 	num = 0;
// 	k = 0;
// 	while (*s == ' ' || *s == '\n' || *s == '\t' || *s == '\r'\
// 	|| *s == '\f' || *s == '\v')
// 		s++;
// 	if (*s == '+' || *s == '-')
// 		if (*s++ == '-')
// 			sign *= -1;
// 	while (*s >= '0' && *s <= '9')
// 	{
// 		k = 1;
// 		num = (num * 10) + (*s++ - '0');
		// if (num < INT_MIN || num > INT_MAX)
		// 	ft_error("Error");
// 	}
	// if (k == 0)
	// 	ft_error("Error");
// 	return (sign * num);
// }
static int	ft_is_plus_or_negative(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	ft_isspace(const char *s, int i)
{
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '\r'\
	|| s[i] == '\f' || s[i] == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *s)
{
	unsigned long	num;
	size_t			i;
	int				k;
	int				sign;

	sign = 1;
	num = 0;
	k = 1;
	i = 0;
	while (ft_isspace(s, i))
		i++;
	while (ft_is_plus_or_negative(s[i]) && k == 1)
	{
		if (s[i] == '-')
			sign = sign * -1;
		k = 0;
		i++;
	}
	k = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i++] - '0');
		k++;
	}
	if (num >= INT_MIN || num >= INT_MAX)
			ft_error("Error");
	if (k == 0)
		ft_error("Error");
	return (sign * num);
}