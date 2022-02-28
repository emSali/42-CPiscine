/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:04:15 by esali             #+#    #+#             */
/*   Updated: 2021/09/14 19:02:45 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_adress(void *addr)
{
	int		i;
	int		count;
	char	*save_ad;

	save_ad = &addr[0];
	count = 0;
	while (save_ad[count] != '\0')
		count++;
	i = 0;
	while (i < 16 - i)
	{
		ft_putchar('0');
		i++;
	}
	i = 0;
	while (save_ad[i] != '\0')
	{
		ft_putchar(save_ad[i]);
		i++;
	}
}

void	dec_to_hex(char dec)
{
	if (dec >= 16)
		dec_to_hex(dec / 16);
	ft_putchar("0123456789abcdef"[dec % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putchar('.');
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{	
	if (size != 0)
	{
		print_adress(addr);
		ft_putchar(':');
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putstr_non_printable(addr);
	}
	return (addr);
}
