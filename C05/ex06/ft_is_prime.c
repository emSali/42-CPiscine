/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:05:55 by esali             #+#    #+#             */
/*   Updated: 2021/09/22 15:05:03 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < 46340)
	{
		if ((i * i <= nb) && ((i + 1) * (i + 1) > nb))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	if (nb <= 1)
		return (0);
	j = ft_sqrt(nb);
	i = 2;
	while (i <= j)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
