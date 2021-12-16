#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// static int	ft_intlen(int n)
// {
// 	int	i;
// 	long	num;

// 	num = (long) n;
// 	i = 0;
// 	if (num < 0)
// 		i = 1;
// 	while (num != 0)
// 	{
// 		i++;
// 		num = num / 10;
// 	}
// 	return (i);
// }

// int	*ft_intdup(int *arr, int len)
// {
// 	int	*buf;
// 	int	i;

// 	buf = (int *) malloc(sizeof(int) * len);
// 	if (!buf)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		buf[i] = arr[i];
// 		i++;
// 	}
// 	return (buf);
// }

// void ft_swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void ft_sort(int arr[], int n)
// {
//    int i;
//    int j;

//    i = 0;
//    j = 0;
// 		fprintf(stderr, "n : %d\n", n);

//    while (i < n - 1)
//    {
// 	   j = 0;
// 	   while (j < n - i - 1)
// 	   {
// 			if (arr[j] > arr[j + 1])
// 				ft_swap(arr + j, arr + j + 1);
// 			j++;
// 	   }
// 		fprintf(stderr, "i : %d\n", i);
// 	   i++;
//    }
// }

// int	*stack_indexed(int ac, char const *av[])
// {
// 	// static int *ak47;
// 	int *ak47;
// 	int *SOS_dup;
// 	int i;
// 	int j;
// 	int ac_backup = ac;

// 	ak47 = malloc(sizeof(int) * ac);
// 	i = 0;
// 	j = 1;
// 	// ac = ac -1;
// 	while (--ac_backup)
// 	{
// 		ak47[i] = ft_atoi(av[j]);
// 		i++;
// 		j++;
// 	}

// 	ac = ac - 1;

// 	SOS_dup = ft_intdup(ak47, ac);
// 	ft_sort(SOS_dup, ac);
// 	i = 0;
// 	j = 0;
// 	// ac = ac -1;

// 	while (i < ac)
// 	{
// 		j = 0;
// 		while (j < ac)
// 		{
// 			if (ak47[i] == SOS_dup[j])
// 				ak47[i] = j;
// 			j++;
// 		}
// 		i++;
// 	}
// 	// free(SOS_dup);
// 	return ak47;
// }
/*

9 4 8 3 5

9 4 8 3 5

*/
int main(int ac, char const *av[])
{
	int x = 1;
	int a = 1;
	int y = 4;
	int b = 8;
	int z = 9;
	// char const *sav[] = {"0", "2", "1", "3"};
	// av = sav;
	// ac = 4;
	// printf("0 = %d\n", 9>>0);
	// printf("1 = %d\n", 9>>1);
	// printf("2 = %d\n", 9>>2);
	// printf("3 = %d\n", 2482>>3);
	// printf("5 = %d\n", 14&1);

	// int *p;
	// p = stack_indexed(ac, av);
	// int i = -1;
	// while (++i < ac - 1)
	// 	printf("%d\n", p[i]);

	// printf("set_bits : %d\n", set_bits_counts(123));

	// int arr[] = {1, 2, 3};
	// int size = sizeof(arr) / sizeof(int);
	// int *ip = ft_intdup(arr, size);
	// int i =0;
	// while (i < 3)
	// {
	// 	printf("%d ", ip[i]);
	// 	i++;
	// }

	int *arr = malloc(sizeof(int) * 100);
	// printf("%d\n", sizeof(arr) / );


	// free(p);

	return 0;
}

// 75 347  455  98 26 172 150 306  603 219
/*
150 172 603 455 75 26 306 347 98 219

603 306 219 26 347 150 455 172 75 98

26 75 98 150 172 219 306 347 455 603

*/
