/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:16:38 by esali             #+#    #+#             */
/*   Updated: 2022/05/30 18:33:01 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nr;
	int	prefix;

	i = 0;
	prefix = 1;
	nr = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			prefix = -1;
		i++;
	} 
	while (str[i] >= '0' && str[i] <= '9')
	{
		nr = nr * 10 + str[i] - 48;
		i++;
	}
	return (prefix * nr);
}
