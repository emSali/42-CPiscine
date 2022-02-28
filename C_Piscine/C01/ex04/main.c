#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 7;
    int b = 2;
    int *div;
    int *mod; 

    div = &a;
    mod = &b;
    printf("div is %d and mod is %d\n\n", *div, *mod);
    ft_ultimate_div_mod(div, mod);
    printf("div is %d and mod is %d\n\n", *div, *mod);
}
