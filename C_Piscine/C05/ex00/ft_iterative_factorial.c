/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:59:21 by esali             #+#    #+#             */
/*   Updated: 2021/09/22 12:01:53 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factor;

	if (nb < 0)
		return (0);
	i = 1;
	factor = 1;
	while (i <= nb)
	{
		factor *= i;
		i++;
	}
	return (factor);
}
