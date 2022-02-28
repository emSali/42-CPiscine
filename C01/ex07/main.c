/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:05:58 by esali             #+#    #+#             */
/*   Updated: 2021/09/13 14:49:08 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
    int size = 5;
    int arr[5] =  {1, 2, 3, 4, 5};
    int *tab;
    
    tab = &arr[0];
    int i = 0;
    while (i < size){
        printf("%i", arr[i]); 
        i++;
    }
    ft_rev_int_tab(tab, size);
    printf("\n");
    int j = 0;
    while (j < size){
        printf("%i", arr[j]); 
        j++;
    }
}
