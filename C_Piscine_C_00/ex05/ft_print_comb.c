#include <unistd.h>

void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	char d;
	char e;

	d = ',';
	e = ' ';
	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{

				write(1, &a, 3);

				if (!(a == '7' && b == '8' && c == '9'))
				{
					write(1, &d, 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
