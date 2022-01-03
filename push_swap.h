/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:01:10 by adouib            #+#    #+#             */
/*   Updated: 2022/01/03 21:22:31 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				number;
	struct s_stack	*next;
}	t_stack;

// operations
void	s(t_stack **list, char *s);
void	p(t_stack **a, t_stack **b, char *s);
void	r(t_stack **list, char *s);
void	rr(t_stack **list, char *s);
void	srr(t_stack **stack);
void	rrs(t_stack **stack);

// array functions
void	ft_putstr(char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(const char *s);
void	ft_error(char *s);
int		is_duplicated(int arr[], int ac);
void	ft_sort(int arr[], int n);
int		*stack_indexed(int ac, char const *av[]);
int		*arr_sorting(int *arr, int len);
int		*arr_indexing(int *arr, int *arr_dup_sorted, int ac);

// linked list functions
int		stack_size(t_stack *list);
int		is_sorted(t_stack *list);
int		get_min(t_stack **a);
int		get_next_min(t_stack **a, int min);
t_stack	*push_top(t_stack *list, int num);
t_stack	*delete_top(t_stack *list);
t_stack	*stack_init(int ac, char const *av[]);

// sorting algorithms
void	sort_three_numbers(t_stack **a);
void	sort_four_numbers(t_stack **a, t_stack **b);
void	sort_five_numbers(t_stack **a, t_stack **b);
void	simple_sort(t_stack **a, t_stack **b, int ac);
void	radix_sort(t_stack **a, t_stack **b);

#endif
