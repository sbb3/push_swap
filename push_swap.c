/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouib <adouib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:58 by adouib            #+#    #+#             */
/*   Updated: 2021/12/17 18:22:46 by adouib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char const *av[])
{
	int *arr = malloc(sizeof(int) * ac);
	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;

	// checking(av, ac);
	// error management : args are not integers, inter args > MAX_INT, or duplicated numbers
	// char const *s_av[] = {"0", "2", "1", "3"};
	// av = s_av;
	// ac = 4;

	if (ac == 1)
		ft_error("You should input more than one argument!");

	ac = ac - 1;
	arr = stack_indexed(ac, av);
	// int i = -1;
	// while (++i < 3)
	// 	printf("arr [%d] : %d ", i, arr[i]);

	a = stack_init(ac, arr);
	if (is_sorted(a))
		printf("stack is sorted\n");
	else
		printf("stack is NOT sorted\n");
	stack_print(a);

	// a = delete_top(&a);
	// fprintf(stderr, "ac : %d\n", ac);

	if (ac < 4)
		sort_three_numbers(&a);

	else if (ac < 6)
		sort_five_numbers(&a, &b);

	else
		radix_sort(&a, &b);
	// printf("max : %d\n", get_max(a));
	if (is_sorted(a))
		printf("\nstack is sorted\n");
	else
		printf("\nstack is NOT sorted\n");
		
	stack_print(a);
	// printf("lst len : %d\n", stack_length(a));
	return 0;
}
/*
// 1 2 3 4 5 6

// convert n = atoi(av[i])

// stack_length
// delete_top
// getmax


sort 5 nums
	// 1. search for max number
	// 2. push to B
	// 3. remove from A


	// again

	// 1. search for second max number
	// 2. remove it from list a
	// 3. push it to list b

	// now do 3 sort numbers function on stack a
	// sort_3_numbers(a);

	// now push from stack B to stack A
	// remove it from stack B
	// ra stack A

	// now push from stack B to stack A
	// remove it from stack B
	// ra stack A

	// et voila stack A is sorted
*/
/*
gcc push_swap.c push_swap_utils.c operations.c utils2.c libftmac.a

static char *backup;
char *line

backup = readfile(fd, backup)
if (!backup)
	return 0;
line =  getline(backup)
backup = leftoverlines(backup)

ft_free(s) -> free(s) s = NULL return s
searchnewline
strdup
strcutfromto
strjoin
	free backup

readfile
	filebuffer
	readbytes
	filebufer = malloc(BUFFER_SIZE)
	while loop (!searchnewline(backup, "\n") && readbytes > 1)
		bytesreturned = read(fd, filebuffer, BUFFER_SIZE)
		if (bytesread == -1)
			ft_free(filebuffer)
		backup = strjoin(backup, filebufer)
	free(filebufer)
	if (backup == '\0')
		ft_free(backup)
	return backup
	
getline
	linesize
	while (backup != '\n' && '\0')
		linesize++;
	if (backup[linesize] == '\n')
		linesize++;
	line = strcutfromto(backup, 0, linesize)
	return line

leftoverslines
	start
	backupsize = ft_strlen(backup)
	while (backup != '\n' && '\0')
		start++;
	if (backup(start) == '\0')
		ft_free(backup)
	backup = strcutfromto(backup, start + 1, backupsize);
	return backup;


intlen
itoabase
	s = "0123456789abcdef"


while n != 0
	modulo = n % base
	buf[--len] = s[mopdulo]
	n = n / base;

ft_putstr
putchar
va_arg
va_list
va_end
i


*/
