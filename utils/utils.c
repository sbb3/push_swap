/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:06 by adouib            #+#    #+#             */
/*   Updated: 2021/12/19 18:35:42 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

void	ft_error(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
	exit(1);
}

int	stack_size(t_stack *list)
{
	int	count;

	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}

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

t_stack	*delete_top(t_stack *list)
{
	t_stack	*tmp;

	if (list->next == NULL)
	{
		free(list);
		return (0);
	}
	tmp = list;
	list = list->next;
	free(tmp);
	return (list);
}

t_stack	*push_top(t_stack *list, int num)
{
	t_stack	*new_node;

	new_node = (t_stack *) malloc(sizeof(t_stack));
	if (list == NULL)
	{
		new_node->number = num;
		new_node->next = NULL;
	}
	else
	{
		new_node->number = num;
		new_node->next = list;
		list = new_node;
	}
	return (new_node);
}
