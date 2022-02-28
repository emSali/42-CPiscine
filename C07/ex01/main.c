#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int *arr;
	int i;

	i = 0;
	arr = ft_range(20, 1);
	while (i < 19)
	{
		printf("%d ,", arr[i]);
		i++;
	}
	//if (arr != NULL)
		free(arr);
}