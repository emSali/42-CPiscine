/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:06:48 by esali             #+#    #+#             */
/*   Updated: 2021/09/15 19:30:47 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!(tmp >= 32 && tmp <= 127))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[tmp / 16]);
			ft_putchar("0123456789abcdef"[tmp % 16]);
		}
		else
			ft_putchar(tmp);
		i++;
	}
}
