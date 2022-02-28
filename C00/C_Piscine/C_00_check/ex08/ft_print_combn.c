/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 14:47:00 by esali             #+#    #+#             */
/*   Updated: 2021/09/11 19:17:56 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb > 9)
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
	if ((nb % 10) != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_calc_nbr(int from, int until)
{
	int	nbr;

	while (from <= until)
	{
		if (until < 9)
		{
			ft_calc_nbr(from + 1, until + 1);
		}
		else
		{
			ft_calc_nbr(from + 1, until);
		}
		nbr = nbr * 10 + from;
		ft_putnbr(nbr);
		from++;
	}
}

void	ft_print_combn(int n)
{
	if (n > 9 | n < 1)
	{
		write(1, "unvalid", 7);
	}
	ft_calc_nbr(0, (10 - n));
}
