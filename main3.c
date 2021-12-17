#include <unistd.h>

int ft_strrchr(char const *s, char c, int size)
{
	size = size - 1;
	while (s[size])
	{
		if (s[size] == c)
			return 1;
		size--;
	}
	return 0;
}

int ft_strchr(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return 1;
		s++;
	}
	return 0;
}

void inter(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(s2, s1[i]) && !ft_strrchr(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	
}

int main(int ac, char const *av[])
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
