#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char			dest1[100];
	char			dest2[100];
	char			*src;
	unsigned int	nb;

	nb = 4;
	src = " l0ris";
	dest1[0] = 'h';
	dest1[1] = 'e';
	dest1[2] = '\0';
	dest2[0] = 'n';
	dest2[1] = 'o';
	dest2[2] = '\0';
	printf("dest1 is before: %s\n", dest1);
	strncat(dest1, src, nb);
	printf("dest1 is after strncat: %s\n", dest1);
	printf("dest2 is before: %s\n", dest2);
	ft_strncat(dest2, src, nb);
	printf("dest2 is after ft_strncat: %s\n", dest2);
}
