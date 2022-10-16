#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int size = 10;
    int arr[10] =  {3, 5, 1, 4, 2, -123, 0, 23457834, -9999999, 10};
    int *tab;
    
    tab = &arr[0];
    int i = 0;
    while (i < size){
        printf("%i ", arr[i]); 
        i++;
    }
    ft_sort_int_tab(tab, size);
    printf("\n");
    int j = 0;
    while (j < size){
        printf("%i ", arr[j]); 
        j++;
    }
}