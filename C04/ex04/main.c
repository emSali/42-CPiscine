#include <stdio.h>
#include <string.h>

void ft_putnbr_base(int nbr, char *base);

int main(void)
{
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
}