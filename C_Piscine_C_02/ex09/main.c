#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char t[] = {'A','\0'};
	printf("A, %s \n", ft_strcapitalize(t));
	
	char t1[] = {'a', 'b', 'c','\0'};
	printf("abc, %s \n", ft_strcapitalize(t1));

	char t2[] = {'A', 'B', 'C','\0'};
 	printf("ABC, %s \n", ft_strcapitalize(t2));

	char t3[] = {'!', '@', '#','\0'};
 	printf("!@#, %s \n", ft_strcapitalize(t3));
	
	char t4[] = "sault, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("sault, comment tu vas ? 42mots quarante-deux; cinquante+et+un\n%s\n", ft_strcapitalize(t4));
	return (0);
}
