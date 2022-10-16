#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	unsigned int s;
	char	dest1[100] = "this is a \0";
	char	dest2[100] = "this is a \0";
	char	*src;

	s = 12;
	src = " copy";
	
	printf("dest1 is before: %s\n", dest1);
	printf("strlcat returns: %lu\n", strlcat(dest1, src, s));
	printf("dest1 is after strclat: %s\n", dest1);
	printf("dest2 is before: %s\n", dest2);
	printf("dest2 returns: %d\n", ft_strlcat(dest2, src, s));
	printf("dest2 is after ft_strlcat: %s\n", dest2);
}