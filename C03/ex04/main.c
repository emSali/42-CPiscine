#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*to_find;
	char	*str;
	char	*result1;
	char	*result2;

	str = "a n is not a needleok bnhyugu ";
	to_find = "need";
	result1 = strstr(str, to_find);
	printf("strstr: %s\n", result1);
	result2 = ft_strstr(str, to_find);
	printf("ft_strstr: %s", result2);
}
