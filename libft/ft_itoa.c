/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:52:12 by esali             #+#    #+#             */
/*   Updated: 2022/03/02 22:57:10 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill(char *re, int n)
{
	if (n < 10)
		return (n);
	else
		re = '0' + n;
		
}

char	*ft_itoa(int n)
{
	char	*re;
	int		count;
	int		n2;

	n2 = n;
	count = 0;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		count++;
	}
	re = (char *) malloc(sizeof(char) * (count + 1));

}