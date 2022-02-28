/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:33:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/29 16:38:36 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printstr(char *ts)
{
	int	i;

	i = 0;
	while (ts[i])
	{
		write(1, &ts[i], 1);
		i++;
	}
}

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

void	ft_show_tab(struct s_stock_str *ts)
{
	int	i;

	i = 0;
	while (ts[i].str)
	{
		ft_printstr(ts[i].str);
		ft_putchar('\n');
		ft_putnbr(ts[i].size);
		ft_putchar('\n');
		ft_printstr(ts[i].copy);
		ft_putchar('\n');
		i++;
	}
}
