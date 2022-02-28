#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
    int i = ft_str_is_printable("abz");

    printf("%d", i);
}