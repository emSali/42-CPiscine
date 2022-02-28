#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("src is %s\n", src);
	ft_strcpy(dest, src);
	printf("dest is  %s\n", dest);
}