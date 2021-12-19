// void foo( char ** ptr)
// {
//    *ptr = malloc(255); // allocate some memory
//    strcpy( *ptr, "Hello World");
// }


int	is_duplicated(int arr[], int ac)
{
	int i = 0;
	int j;
	j = 0;
	while (i < ac)
	{
		j = i;
		while (j < ac - 1)
		{
			if (arr[i] == arr[j + 1])
				return 1;
			j++;
		}
		i++;
	}
	return 0;
}
#include <stdio.h>
int main()
{
//    char *ptr = 0;
//    // call function with a pointer to pointer
//    foo( &ptr );
//    printf("%s\n", ptr);
//    // free up the memory
//    free(ptr);

	int arr[] = {1, 2, 3, 5, 5};
	int size = sizeof(arr) / sizeof(int);

	if (is_duplicated(arr, size))
		printf("true");
	else
		printf("false");

   return 0;
}
