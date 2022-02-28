#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "hello 42-World";
	printf("strlen returns: %lu\n", strlen(str));
	printf("ft_strlen returns: %d", ft_strlen(str));
}
