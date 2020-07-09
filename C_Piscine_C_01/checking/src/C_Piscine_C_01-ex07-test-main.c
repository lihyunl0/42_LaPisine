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
		
	int test[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(test, 9);
	for (int i = 0; i < 9; i++)
	{
		printf("%d, ", test[i]);
	}
	printf("\n");
	ft_rev_int_tab(test, 3);
	for (int i = 0; i < 9; i++)
	{
		printf("%d, ", test[i]);
	}
	printf("\n");
	}

	
