#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1; 
	char *s2;

	s1 = "he laz";
	s2 = "he la";

	printf("strcmp is: %i\n", strcmp(s1, s2));
	printf("ft_strcmp is: %i\n", ft_strcmp(s1, s2));
}
