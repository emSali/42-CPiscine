#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int ac, char *av[])
{
	t_stock_str *ts;
	int i;

	ts = ft_strs_to_tab(ac, av);
	i = 0;
	while (i < ac)
	{
		printf("Size: %d\n", ts[i].size);
		printf("Str: %s\n", ts[i].str);
		printf("Copy: %s\n", ts[i].copy);
		printf("----------\n");
		i++;
	}
}