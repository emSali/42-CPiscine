#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*range;

	min = 1;
	max = 5;
	i = 0;
	int size = ft_ultimate_range(&range, min, max);
	while (i < (max - min))
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\nsize is: %d\n", size);
}
