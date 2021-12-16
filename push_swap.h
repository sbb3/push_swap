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
	int	index;
	struct s_stack *next;
} t_stack;

void	ft_putstr(char *s);
int	ft_atoi(const char *s);
int	*ft_intdup(int *arr, int len);
void	checking(char **av, int ac);
// Operations or Actions
void	sab(t_stack **list, char *s);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	rab(t_stack **list, char *s);
void	rrab(t_stack **list, char *s);
void	sa_ra(t_stack **list);
void	sa_rra(t_stack **list);

// Linked list functions
int	*stack_indexed(int ac, char const *av[]);
void ft_swap(int *xp, int *yp);
void ft_sort(int arr[], int n);
static int	ft_intlen(int n);

int	stack_length(t_stack *list);

t_stack *stack_init(int ac, int arr[]);
t_stack *push_top(t_stack *list, int num);
t_stack *delete_top(t_stack *list);
int is_sorted(t_stack *list);
int get_max(t_stack *list);
void stack_print(t_stack *list);
void	ft_error(char *s);

// Sorting algo
void sort_three_numbers(t_stack **list);
void sort_five_numbers(t_stack **a, t_stack **b);
void	sort_big_numbers(t_stack **a, t_stack **b);
#endif
