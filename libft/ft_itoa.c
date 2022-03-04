/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:52:12 by esali             #+#    #+#             */
/*   Updated: 2022/03/04 19:21:39 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getsize(int nb)
{
	int	size;

	if (nb < 0)
		size = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

static int	makepos(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

char	*ft_itoa(int nb)
{
	char	*re;
	int		size;

	size = getsize(nb);
	re = (char *) malloc(sizeof(char) * (size + 1));
	if (re == NULL)
		return (NULL);
	re[size] = '\0';
	size--;
	if (nb == -2147483648)
		{
			re[1] = '0' + 2;
			nb = -147483648;
		}
	if (nb < 0)
		re[0] = '-';
	while (nb >= 10 || nb <= -10)
	{
		re[size--] = '0' + (makepos(nb) % 10);
		nb = makepos(nb) / 10;
	}
	re[size] = '0' + nb;
	return (re);
}
