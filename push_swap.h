/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:10 by adouib            #+#    #+#             */
/*   Updated: 2021/12/12 17:11:47 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
	struct s_stack *prev;
	int number;
	struct s_stack *next;
} t_stack;

int	ft_atoi(const char *s);

// Operations or Actions
void	sa(t_stack *list);
void	sb(t_stack *list);
void	ra(t_stack *list);
void	rb(t_stack *list);
void	rra(t_stack *list);
void	rrb(t_stack *list);
void	sa_ra(t_stack *list);

// Linked list functions

t_stack *stack_init(int ac, char const *av[]);
t_stack *push_top(t_stack *list, int num);
t_stack *delete_top(t_stack *list);
int stack_is_sorted(t_stack *list);
t_stack *getmax(t_stack *list);
void stack_print(t_stack *list);
void	ft_error(char *s);

// Sorting algo
void sort_three_numbers(t_stack *list);
void sort_five_numbers(t_stack *list);

#endif
