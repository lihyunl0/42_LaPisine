#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char t[] = {'A', '\0'};
	printf("A, %s \n", ft_strlowcase(t));
	
	char t1[] = {'a', 'b', 'c', '\0'};
	printf("abc, %s \n", ft_strlowcase(t1));
	
	char t2[] = {'!', '@', '#', '\0'};
	printf("!@#, %s \n", ft_strlowcase(t2));
	
	char t3[] = {'a', 'B', 'c', 'D', '\0'};
	printf("aBcD, %s \n", ft_strlowcase(t3));
	
	char t4[] = {'1', 'a', 'B', 'C', '\0'};
	printf("1aBC, %s \n", ft_strlowcase(t4));

	return (0);
}
