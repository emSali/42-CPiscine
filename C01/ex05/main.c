#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
    char hello[5] =  {'h', 'e', 'l', 'l', 'o'};
    char *str;

    str = &hello[0];
    ft_putstr(str);
}
