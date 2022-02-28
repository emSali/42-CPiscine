#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char *str;
    str = "hEy yu0 lIttle_q";
    char save[17];
    int i = 0;

    while (i < 17)
    {
        save[i] = str[i];
        i++;
    }

    printf("%s\n", save);
    ft_strcapitalize(&save[0]);
    printf("%s\n", save);
}