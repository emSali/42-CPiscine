#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
    char *str;
    str = "Hello W0rld";
    char save[12];
    int i = 0;

    while (i < 12)
    {
        save[i] = str[i];
        i++;
    }

    printf("%s\n", save);
    ft_strupcase(&save[0]);
    printf("%s\n", save);
}