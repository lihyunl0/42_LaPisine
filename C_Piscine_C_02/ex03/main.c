#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	printf("123, %d\n", ft_str_is_numeric("123"));
	printf("abc, %d\n", ft_str_is_numeric("abc"));
	printf("ab12, %d\n", ft_str_is_numeric("ab12"));
	printf("#@!, %d\n", ft_str_is_numeric("#@!"));
	printf(", %d\n", ft_str_is_numeric(""));
	return (0);
}
