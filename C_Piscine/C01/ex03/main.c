#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
    int a = 7;
    int b = 2;
    int *div;
    int *mod; 

    div = &a;
    mod = &b;
    printf("div is %d and mod is %d\n\n", *div, *mod);
    ft_div_mod(a, b, div, mod);
    printf("div is %d and mod is %d\n\n", *div, *mod);
}
