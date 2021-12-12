#include "push_swap.h"


int main(int ac, char const *av[])
{

	t_stack *a;
	t_stack *b;

	a = NULL;
	b = NULL;

	// error management : args are not integers, inter args > MAX_INT, or duplicated numbers
	char const *s_av[] = {"6", "9", "4"};
	av = s_av;
	ac = 3;

	if (ac == 1)
		exit(1);

	a = stack_init(ac, av);
	if (stack_is_sorted(a))
		printf("stack is sorted\n");
	else
		printf("stack is NOT sorted\n");
	if (ac < 4)
		sort_three_numbers(a);

	// if (ac < 6)
	// 	sort_five_numbers(a);





	stack_print(a);

	return 0;
}

// 1 2 3 4 5 6

// convert n = atoi(av[i])

// ft_lstlen
// delete_top
// sa sb
// ra rb
// getmax

/*
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
