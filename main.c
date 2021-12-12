#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 7;
	int z = 15;

	printf("x = %d\n", x>>2);
	printf("y = %d\n", y<<2);
	printf("z = %d\n", z&2);
	return 0;
}
