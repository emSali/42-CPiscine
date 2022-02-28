#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *strs[3];
	char *sep;

	strs[0] = "hey";
	strs[1] = "you";
	strs[2] = "qutie";
	sep = ", ";
	printf("%s", ft_strjoin(0, strs, sep));
}
