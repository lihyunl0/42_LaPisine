	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>
	#include <unistd.h>


	int		ft_atoi(char *str);

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
	printf("%d ", atoi(" 1"));
	// +- 조합은 라이브러리 함수에서 먹히지 않네요
	printf("%d ", /*atoi("   --+--+1234ab567")*/1234);
	printf("%d ", /*atoi("   -+--++++2")*/-2);
	printf("%d ", atoi("-134ab567"));
	printf("%d ", atoi("134ab567"));
	printf("%d ", atoi("\n \v \f \r \t  -13"));
	printf("%d ", atoi(" a"));
	printf("%d ", atoi("-"));
	printf("%d ", atoi(" +3-3+2 3"));
	// printf("%d %d %d %d %d %d", '\n', '\v', '\r', '\f', '\t', ' ');
	printf("\n-----------------------------\n");
	printf("Pisciner Made: \n");
	printf("%d ", ft_atoi(" 1"));
	printf("%d ", ft_atoi("   --+--+1234ab567"));
	printf("%d ", ft_atoi("   -+--++++2"));
	printf("%d ", ft_atoi("-134ab567"));
	printf("%d ", ft_atoi("134ab567"));
	printf("%d ", ft_atoi("\n \v \f \r \t  -13"));
	printf("%d ", ft_atoi(" a"));
	printf("%d ", ft_atoi("-"));
	printf("%d ", ft_atoi(" +3-3+2 3"));
	printf("\n");
	}

	
