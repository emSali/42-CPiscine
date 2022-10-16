#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char hello[5] =  {'h', 'e', 'l', 'l', 'o'};
    char *str;
    int count;

    str = &hello[0];
    count = ft_strlen("hello");
    printf("%d chars", count); 
}