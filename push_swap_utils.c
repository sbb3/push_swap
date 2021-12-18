/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:06 by adouib            #+#    #+#             */
/*   Updated: 2021/12/17 18:29:51 by adouib           ###   ########.fr       */
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
	printf("\n");
}

int	stack_length(t_stack *list)
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

int is_sorted(t_stack *list)
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
// void	checking(char **av, int ac)
// {

// }

t_stack *delete_top(t_stack *list)
{
	t_stack *tmp;

	if (list->next == NULL)
	{
		free(list);
		return NULL;
	}
	tmp = list;

	list = list->next;
	list->prev = NULL;

	free(tmp);

	return (list);
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

t_stack *stack_init(int ac, int arr[])
{
	int num;
	int size;
	t_stack *list;

	list = NULL;
	size = ac - 1;
	while (size != -1)
	{
		list = push_top(list, arr[size]);
		// fprintf(stderr, "list num : %d\n", list->number);
		// fprintf(stderr, "ac: %d\n", size);
		size--;
	}
	return (list);
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

void ft_swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void ft_sort(int arr[], int n)
{
   int i;
   int j;

   i = 0;
		// fprintf(stderr, "n : %d\n", n);

   while (i < n - 1)
   {
	   j = 0;
	   while (j < n - i - 1)
	   {
			if (arr[j] > arr[j + 1])
				ft_swap(arr + j, arr + j + 1);
			j++;
	   }
		// fprintf(stderr, "i : %d\n", i);
	   i++;
   }
}

int	*stack_indexed(int ac, char const *av[])
{
	// static int *ak47;
	int *ak47;
	int *SOS_dup;
	int i;
	int j;
	int ac_backup = ac;

	ak47 = malloc(sizeof(int) * ac);
	i = 0;
	// ac = ac -1;
	while (ac_backup)
	{
		ak47[i] = ft_atoi(av[i + 1]);
		i++;
		ac_backup--;
	}
	// i = -1;
	// while (++i < 3)
	// 	printf("ak47 : %d ", ak47[i]);

	SOS_dup = ft_intdup(ak47, ac);
	ft_sort(SOS_dup, ac);
	// i = -1;
	// while (++i < 3)
	// 	printf("sos dup: %d ", SOS_dup[i]);
	i = 0;
	j = 0;
	// ac = ac -1;
	int *p = malloc(sizeof(int) * ac);
	while (i < ac)
	{
		j = 0;
		while (j < ac)
		{
			if (ak47[i] == SOS_dup[j])
				p[i] = j;
			j++;
		}
		i++;
	}
	// i = -1;
	// while (++i < 3)
	// 	printf("ppppppp [%d]: %d ",i , p[i]);
	// free(SOS_dup);
	// i = -1;
	// while (++i < 3)
	// 	printf("arr main : %d ", ak47[i]);
	// fprintf(stderr, "pppp size : %lu\n", sizeof(p) / sizeof(int));
	return p;
}
