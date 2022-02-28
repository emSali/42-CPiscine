/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 22:58:24 by esali             #+#    #+#             */
/*   Updated: 2021/09/28 22:05:58 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int	ft_number_length(long nb, int size_to)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{	
		i = 1;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / size_to;
		i++;
	}
	return (i);
}

char	*to_base(long nb, char *base_to, int size_to)
{
	char	*res;
	int		i;
	int		j;

	i = ft_number_length(nb, size_to);
	j = 0;
	res = (char *)malloc(sizeof (char *) * (i));
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
		j = 1;
	}
	res[i] = '\0';
	while (--i >= j)
	{
		res[i] = base_to[nb % size_to];
		nb = nb / size_to;
	}
	return (res);
}
