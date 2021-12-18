/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:10 by adouib            #+#    #+#             */
/*   Updated: 2021/12/17 17:49:36 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_stack
{
	struct s_stack *prev;
	int number;
	int	index;
	struct s_stack *next;
} t_stack;

void	ft_putstr(char *s);
int	ft_atoi(const char *s);
int	*ft_intdup(int *arr, int len);
// void	ft_error(char **av, int ac);
// Operations or Actions
void	s(t_stack **list, char *s);
void	p(t_stack **a, t_stack **b, char *s);
void	r(t_stack **list, char *s);
void	rr(t_stack **list, char *s);
void	srr(t_stack **stack);
void	rrs(t_stack **stack);

// Linked list functions
int	*stack_indexed(int ac, char const *av[]);
void ft_swap(int *xp, int *yp);
void ft_sort(int arr[], int n);
static int	ft_intlen(int n);
int	get_min(t_stack **a);
int	get_next_min(t_stack **a, int min);

int	stack_length(t_stack *list);

t_stack *stack_init(int ac, int arr[]);
t_stack *push_top(t_stack *list, int num);
t_stack *delete_top(t_stack *list);
int is_sorted(t_stack *list);
int get_max(t_stack *list);
void stack_print(t_stack *list);
void	ft_error(char *s);

// Sorting algo
void 	sort_three_numbers(t_stack **a);
void 	sort_four_numbers(t_stack **a, t_stack **b);
void 	sort_five_numbers(t_stack **a, t_stack **b);
void	simple_sort(t_stack **a, t_stack **b, int ac);
void	radix_sort(t_stack **a, t_stack **b);
#endif
