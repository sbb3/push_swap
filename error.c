#include "push_swap.h"

// void	print_error()
// {
// 	write(1, "Error\n", 7);
// 	exit(1);
// }

void	ft_error(char *s)
{
	// double check if is sorted should print Error or nothing
	// if (is_sorted(arr))
	// 	ft_error();
	// if (is_duplicated(arr))
	// 	ft_error();
	// if (!ft_isdigit(av))
	// 	ft_error();
	ft_putstr(s);
	// free here
	exit(1);
}
