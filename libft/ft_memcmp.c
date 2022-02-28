/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:40:33 by esali             #+#    #+#             */
/*   Updated: 2022/02/17 17:53:02 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*s1_help;
	char	*s2_help;

	s1_help = (char *) s1;
	s2_help = (char *) s2;
	if ((int) ft_strlen(s1) == 0 && (int) ft_strlen(s2) == 0)
		return (0);
	i = 0;
	while (i < (int) n)
	{
		if (s1_help[i] != s2_help[i])
			return ((int)(s1_help[i] - s2_help[i]));
		i++;
	}
	return (0);
}
