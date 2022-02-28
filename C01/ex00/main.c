#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int i = 0;
	int	*pointer;
	pointer = &i;

	ft_ft(pointer);
	printf("%i", *pointer);
}
