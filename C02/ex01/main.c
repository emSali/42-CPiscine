#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("base   : %s\n", src);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
}