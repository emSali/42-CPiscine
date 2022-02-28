#include <stdio.h>

char *ft_strlowcase(char *str);

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
    ft_strlowcase(&save[0]);
    printf("%s\n", save);
}