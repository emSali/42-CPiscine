#include <stdio.h>

void    ft_swap(int *a, int *b);

int main(void)
{
    int i = 0;
    int j = 1;
    int *a;
    int *b; 

    a = &i;
    b = &j;
    printf("a is %d and b is %d\n\n", *a, *b);
    ft_swap(a, b);
    printf("a is %d and b is %d\n\n", *a, *b);
}
