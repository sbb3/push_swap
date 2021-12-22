/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:06 by adouib            #+#    #+#             */
/*   Updated: 2021/12/21 13:08:08 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (!new_node)
		return (0);
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

void	srr(t_stack **stack)
{
	s(stack, "sa");
	rr(stack, "rra");
}
