#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest1[100];
	char	dest2[100];
	char	*src;

	src = " lo";
	dest1[0] = 'h';
	dest1[1] = 'e';
	dest1[2] = '\0';
	dest2[0] = 'n';
	dest2[1] = 'o';
	dest2[2] = '\0';
	
	printf("dest1 is before: %s\n", dest1);
	strcat(dest1, src);
	printf("dest1 is after strcat: %s\n", dest1);
	printf("dest2 is before: %s\n", dest2);
	ft_strcat(dest2, src);
	printf("dest2 is after ft_strcat: %s\n", dest2);
}
