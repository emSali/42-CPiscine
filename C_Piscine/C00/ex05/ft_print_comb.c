/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:46:56 by esali             #+#    #+#             */
/*   Updated: 2021/09/11 19:37:13 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(char i, char f, char g)
{
	write(1, &i, 1);
	write(1, &f, 1);
	write(1, &g, 1);
	if (i == '7' && f == '8' && g == '9')
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	f;
	char	g;

	i = '0';
	while (i <= '9')
	{
		f = i + 1;
		while (f <= '9')
		{
			g = f + 1 ;
			while (g <= '9')
			{
				print_nbr(i, f, g);
				g++;
			}
			f++;
		}
		i++;
	}
}
