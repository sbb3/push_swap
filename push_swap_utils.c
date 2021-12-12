#include "push_swap.h"

void stack_print(t_stack *list)
{
	if (list == NULL)
		printf("list == NULL\n");
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	printf("list empty\n");
}

// node1 node2 node3 1 2 3
int stack_is_sorted(t_stack *list)
{
	t_stack	*next_node;

	while (list->next != NULL)
	{
		next_node = list->next;
		if (list->data > next_node->data)
			return (0);
		list = list->next;
	}
	return 1;
}

t_stack *push_top(t_stack *list, int num)
{
	t_stack	*new_node;

	new_node = (t_stack *) malloc(sizeof(t_stack));
	if (list == NULL)
	{
		new_node->prev = NULL;
		new_node->data = num;
		new_node->next = NULL;
	}
	else
	{
		new_node->prev = NULL;
		new_node->data = num;
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

	i = 0;
	list = NULL;
	while (i < ac)
	{
		num = ft_atoi(av[i]);
		list = push_top(list, num);
		i++;
	}
	return (list);
}
/*
132


*/
void sort_three_numbers(t_stack *list)
{
	int num1;
	int num2;
	int num3;

	num1 = list->data;
	num2 = list->next->data;
	num3 = list->next->next->data;

	if (num1 < num2 && num2)
		
	else if (num1 )
}

// void sort_five_numbers(t_stack *list)
// {

// }
