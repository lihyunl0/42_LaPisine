#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	;

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
		
	int div = 0, mod = 0;
	ft_div_mod(473, 25, &div, &mod);
	printf("div, mod : %d, %d\n", div, mod);
	ft_div_mod(-43, 3, &div, &mod);
	printf("div, mod : %d, %d\n", div, mod);
	ft_div_mod(0, 5, &div, &mod);
	printf("div, mod : %d, %d\n", div, mod);
	}

	
