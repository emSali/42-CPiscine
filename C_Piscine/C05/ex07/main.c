#include <stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
	int i;

	i = ft_find_next_prime(2147483000);
	printf("%d\n", i);
}