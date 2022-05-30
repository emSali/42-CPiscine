/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:49:36 by esali             #+#    #+#             */
/*   Updated: 2022/05/30 18:21:08 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*save_s1;
	unsigned char	*save_s2;

	save_s1 = (unsigned char *) s1;
	save_s2 = (unsigned char *) s2;
	
	i = 0;
	while (i < (unsigned int)n && i <= (int) ft_strlen(s1) && i <= (int) ft_strlen(s2))
	{
		if (s1[i] != s2[i])
			return ((unsigned int)(save_s1[i] - save_s2[i]));
		i++;
	}
	return (0);
}
