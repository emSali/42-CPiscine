/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:31:14 by esali             #+#    #+#             */
/*   Updated: 2021/09/28 22:05:59 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

char	*to_base(long nb, char *base_to, int size_to);

int	check_base(char *base)
{
	int	base_s;
	int	i;

	base_s = 0;
	while (base[base_s] != '\0')
	{
		if (base[base_s] == '-' || base[base_s] == '+')
			return (0);
		if (base[base_s] == ' ' || (base[base_s] >= 9 && base[base_s] <= 13))
			return (0);
		i = base_s + 1;
		while (base[i] != '\0')
		{
			if (base[base_s] == base[i])
				return (0);
			i ++;
		}
		base_s++;
	}
	if (base_s < 2)
		return (0);
	return (base_s);
}

int	base_to_dec(char nbr, char *base)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (nbr == base[j])
		{
			return (j + 1);
		}
		j++;
	}
	return (0);
}

long	to_dec(char *str, char *base, int base_size)
{
	long	dec;
	int		minus;
	int		i;

	i = 0;
	minus = 1;
	dec = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= (-1);
		i++;
	}
	while (base_to_dec(str[i], base))
	{
		dec = dec * base_size + base_to_dec(str[i], base) - 1;
		i++;
	}
	dec = dec * minus;
	return (dec);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size_from;
	int		size_to;
	char	*res;
	long	dec;

	size_from = check_base(base_from);
	size_to = check_base(base_to);
	if (size_to == 0 || size_from == 0)
	{
		return (0);
	}
	dec = to_dec(nbr, base_from, size_from);
	if (dec > 2147483647 || dec < -2147483648)
		return (0);
	res = to_base(dec, base_to, size_to);
	return (res);
}
