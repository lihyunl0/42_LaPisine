	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>
	#include <unistd.h>


	void	ft_putnbr_base(int nbr, char *base);

	void printmsg(const char *msg, ...)
	{
		char *newstr = (char *)malloc(strlen(msg) + 2);
		strcpy(newstr, msg);
		strcat(newstr, "\n");

		va_list args;
		va_start(args, msg);
		vprintf(newstr, args);
		va_end(args);
		// printf("%s\n", msg);
		free(newstr);
	}

	void printline()
	{
		printf("\n------------------------------------------------------------\n");
	}

	void print_testing(const char *code)
	{
		printmsg("\n## testing code :");
		printf("%s", code);
	}

	int main()
	{
			ft_putnbr_base(7290, "0123456789");
	printf("\n");
	ft_putnbr_base(7290, "abcdefghij");
	printf("\n");
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(42, "0112345678");
	printf("\n");
	ft_putnbr_base(42, "012345 678");
	printf("\n");
	ft_putnbr_base(42, "01+2345678");
	printf("\n");
	ft_putnbr_base(42, "01-2345678");
	printf("\n");
	ft_putnbr_base(145062, "mrdoc");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(0, "0123456789");
	printf("\n");
	}

	
