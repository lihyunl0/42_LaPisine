#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	void	ft_ultimate_div_mod(int *a, int *b);

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
		
	int a = 473, b = 25;
	ft_ultimate_div_mod(&a, &b);
	printf("a, b : %d, %d\n", a, b);
	a = -43, b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a, b : %d, %d\n", a, b);
	a = 0, b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("a, b : %d, %d\n", a, b);
	}

	
