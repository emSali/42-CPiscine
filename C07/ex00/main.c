#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void)
{
	char *src; 

	src = "Hello you!?";
	printf("%s\n", ft_strdup(src));
	printf("%s\n", strdup(src));
}