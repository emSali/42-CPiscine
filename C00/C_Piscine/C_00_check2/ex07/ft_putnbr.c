/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:06:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/11 19:12:14 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr((-nb));
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		digit = '0' + nb % 10;
		write(1, &digit, 1);
	}
	else
	{
		digit = '0' + nb;
		write(1, &digit, 1);
	}
}	
