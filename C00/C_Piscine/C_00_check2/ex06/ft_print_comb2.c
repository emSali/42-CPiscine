/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 19:06:04 by esali             #+#    #+#             */
/*   Updated: 2021/09/11 21:49:46 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(int i, int j)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0' + i / 10;
	a2 = '0' + i % 10;
	b1 = '0' + j / 10;
	b2 = '0' + j % 10;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, " ", 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	if (i != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_printchar(i, j);
			j++;
		}
		i++;
	}
}
