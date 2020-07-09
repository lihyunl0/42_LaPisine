#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	void	ft_ultimate_ft(int *********nbr);

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
		
	int i = 1423;
	int *i1 = &i;
	int **i2 = &i1;
	int ***i3 = &i2;
	int ****i4 = &i3;
	int *****i5 = &i4;
	int ******i6 = &i5;
	int *******i7 = &i6;
	int ********i8 = &i7;
	int *********i9 = &i8;
	ft_ultimate_ft(i9);
	printf("%d\n", i);
	}

	
