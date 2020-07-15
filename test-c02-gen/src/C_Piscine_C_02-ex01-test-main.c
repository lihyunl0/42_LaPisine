#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	char	*ft_strncpy(char *dest, char *src, unsigned int n);

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
			int i;
	char c[20];

	for(i=0;i<20;i++)
	printf("%s\n", ft_strncpy(c, "1234567891234567890", 21));
	printf("%s\n", ft_strncpy(c, "ujuj", 3));
	printf("%s\n", ft_strncpy(c, "1234", 9));
	}

	
