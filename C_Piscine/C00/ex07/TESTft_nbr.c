/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:40:20 by esali             #+#    #+#             */
/*   Updated: 2021/09/11 14:05:53 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_printnbr(int nb)
{
	char digit;
	int mod;
	int notzero;
	int counter;

	mod = 1000000000;
	notzero = 0;
	counter = 0;
	while (counter <= 9){
		digit = '0' + nb / mod;
		if (digit != 0)
		{
			notzero = 1;
		}
		if (notzero == 1)		
		{
			write(1, &digit, 1);
		}
		mod = mod / 10;
		counter++;
	}
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n-b);
	}
	ft_printnbr(nb);
}
