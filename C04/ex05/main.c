#include <stdio.h>
#include <string.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	*str;
	int		r;

	str = "  -+--80000000";
	r = ft_atoi_base(str, "0123456789ABCDEF");
	printf("%d", r);
}