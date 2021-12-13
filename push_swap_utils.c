/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:06 by adouib            #+#    #+#             */
/*   Updated: 2021/12/12 18:14:22 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	exit(1);
}

void stack_print(t_stack *list)
{
	if (list == NULL)
		printf("list == NULL\n");
	while (list)
	{
		printf("%d ", list->number);
		list = list->next;
	}
	printf("\nlist empty\n");
}

int	ft_lstlen(t_stack *list)
{
	int	count;

	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return count;
}

// t_stack *getmax(t_stack *list)
// {

// }

int stack_is_sorted(t_stack *list)
{
	t_stack	*next_node;

	while (list->next != NULL)
	{
		next_node = list->next;
		if (list->number > next_node->number)
			return (0);
		list = list->next;
	}
	return 1;
}

t_stack *delete_top(t_stack **list)
{
	t_stack *tmp;

	tmp = (*list);

	(*list) = (*list)->next;
	(*list)->prev = NULL;

	free(tmp);

	return (*list);
}


t_stack *push_top(t_stack *list, int num)
{
	t_stack	*new_node;

	new_node = (t_stack *) malloc(sizeof(t_stack));
	if (list == NULL)
	{
		new_node->prev = NULL;
		new_node->number = num;
		new_node->next = NULL;
	}
	else
	{
		new_node->prev = NULL;
		new_node->number = num;
		new_node->next = list;
		list->prev = new_node;
		list = new_node;
	}
	return (new_node);
}

t_stack *stack_init(int ac, char const *av[])
{
	int num;
	int i;
	t_stack *list;

	ac = ac - 1;
	list = NULL;
	while (ac)
	{
		num = ft_atoi(av[ac]);
		list = push_top(list, num);
		ac--;
	}
	return (list);
}
/*
132 -> sa 312 -> ra 123

213 sa 123
231 rra 123

312 ra 123
321 sa 231 rra 123

*/
void sort_three_numbers(t_stack **list)
{
	int num1;
	int num2;
	int num3;

	num1 = (*list)->number;
	num2 = (*list)->next->number;
	num3 = (*list)->next->next->number;

	if (num1 < num2 && num2 > num3 && num3 > num1)
		sa_ra(list);
	else if (num1 > num2 && num2 < num3 && num3 > num1)
		sab(list, "sa");
	else if (num1 < num2 && num2 > num3 && num3 < num1)
		rrab(list, "rra");
	else if (num1 > num2 && num2 < num3 && num3 < num1)
		rab(list, "ra");
	else if (num1 > num2 && num2 > num3 && num3 < num1)
		sa_rra(list);
}

void sort_five_numbers(t_stack **list)
{

}
