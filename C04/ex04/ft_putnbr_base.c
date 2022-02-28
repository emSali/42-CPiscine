/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:41:39 by esali             #+#    #+#             */
/*   Updated: 2021/09/21 12:59:19 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	change_base(long nbr, char *base, int base_size)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_size)
	{
		change_base(nbr / base_size, base, base_size);
	}
	ft_putchar(base[nbr % base_size]);
}

//take care of highest negative number
void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	i;

	base_size = 0;
	while (base[base_size] != '\0')
	{
		if (base[base_size] == '-' || base[base_size] == '+')
			return ;
		i = base_size + 1;
		while (base[i] != '\0')
		{
			if (base[base_size] == base[i])
				return ;
			i ++;
		}
		base_size++;
	}
	if (base_size > 1)
	{
		change_base((long) nbr, base, base_size);
	}
}
