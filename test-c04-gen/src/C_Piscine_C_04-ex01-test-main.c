	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>
	#include <unistd.h>


	void	ft_putstr(char *str);

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
			printf("system: \n");
	printf("hello\n");
	printf("");
	printf("end~\n");
	printf("\n-----------------------------\n");
	printf("Pisciner Made: \n");
	ft_putstr("hello\n");
	ft_putstr("");
	ft_putstr("end~\n");
	}

	
