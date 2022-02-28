#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;
	int		r;

	str = " \n\v --123ab12";
	r = ft_atoi(str);
	printf("%d", r);
}
