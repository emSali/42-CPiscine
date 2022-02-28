#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	s1 = "hee you";
	s2 = "hee you";
	n = 0;
	printf("strnc7878787878787mp is: %i\n", strncmp(s1, s2, n));
	printf("ft_strncmp is: %i\n", ft_strncmp(s1, s2, n));
}
