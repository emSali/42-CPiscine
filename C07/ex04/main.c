#include <stdlib.h>
#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)
{
	char *nbr;
	char *base_from;
	char *base_to;
	char *res;

	nbr = "  +++++---4D2";	
	base_from = "0123456789ABCDEF";
	base_to = "01";
	res = ft_convert_base(nbr, base_from, base_to);
	printf("%s", res);
	free(res);
}
