#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    int i = ft_str_is_numeric("1239");

    printf("%d", i);
}