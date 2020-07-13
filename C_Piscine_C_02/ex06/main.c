#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char c;

	for (int i = -2; i <130; i++)
	{
		c = i;
		printf("%d, %c, %d\n", i, c, ft_str_is_printable(&c));
	}
	return (0);
}
