#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *Dest, char *src, unsigned int n);

int		main(void)
{
	unsigned int n = 15;
	char src[50] = "abcdeefghijk";
	char dest[50] = "0123456789";
	char dest2[50] = "0123456789";
	
	printf("%s\n", ft_strncpy(dest, src, n));
	printf("\n");
	printf("%s\n", strncpy(dest2, src, n));
	return (0);
}
