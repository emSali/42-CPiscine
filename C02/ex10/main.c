#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
    char *dest;
    char *src;
    src = "hey";    
    dest = "nee";
    char d_save[4];
    int i = 0;

    while (i < 4)
    {
        d_save[i] = dest[i];
        i++;
    }

    printf("%s\n", d_save);
    ft_strlcpy(&d_save[0], src, 4);
    printf("%s\n", d_save);
}