#include "push_swap.h"

void	print_error()
{
	write(1, "Error\n", 7);
	exit(1);
}

int is_sorted()
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

int	is_duplicated(char **av)
{

}

int	ft_isdigit(const char **av)
{
	int i;

	i = 0;
	while (*av)
	{
		if (!(av[i] >= "0" && av[i] <= "9"))
			return (0);
		i++;
		av++;
	}
	return (1);
}

void	ft_error(char **av, int ac)
{
	// double check if is sorted should print Error or nothing
	if (is_sorted(arr))
		ft_error();
	if (is_duplicated(arr))
		ft_error();
	if (!ft_isdigit(av))
		ft_error();


}
