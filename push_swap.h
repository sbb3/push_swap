#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	struct s_stack *prev;
	int data;
	struct s_stack *next;
} t_stack;

int	ft_atoi(const char *s);
void stack_print(t_stack *list);
t_stack *push_top(t_stack *list, int num);
t_stack *stack_init(int ac, char const *av[]);
int stack_is_sorted(t_stack *list);
void sort_three_numbers(t_stack *list);
void sort_five_numbers(t_stack *list);

#endif
