/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:01:50 by esali             #+#    #+#             */
/*   Updated: 2021/09/22 20:18:16 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{	
	int	s;

	s = 0;
	if (nb <= 0)
		return (0);
	while (s < 46340)
	{
		if (((s + 1) * (s + 1) > nb) && (s * s <= nb))
		{
			return (s);
		}
		s++;
	}
	return (s);
}

int	ft_is_prime(int nb, int square)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= square)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	square;
	int	is_prime;

	square = ft_sqrt(nb);
	is_prime = ft_is_prime(nb, square);
	if (is_prime == 1)
	{
		return (nb);
	}
	else if (nb < 2)
	{
		return (2);
	}
	else
	{
		while (nb < 2147483647)
		{
			if (ft_is_prime(nb, square) == 1)
				return (nb);
			nb++;
		}
	}
	return (nb);
}
