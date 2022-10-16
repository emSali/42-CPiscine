#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(void)
{
    char *str;
    str = "\no, €o";  
    ft_putstr_non_printable(&str[0]);
}