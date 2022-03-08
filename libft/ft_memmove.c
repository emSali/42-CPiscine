/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:28:40 by esali             #+#    #+#             */
/*   Updated: 2022/03/08 18:07:43 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	something(const void *src, int n)
{
	if ((int) ft_strlen(src) > n)
		return (n);
	return ((int) ft_strlen(src));
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dst2;
	char	*src2;

	i = something(src, (int) n);
	src2 = (char *) src;
	dst2 = (char *) dst;
	while (i >= 0)
	{
		dst2[i] = src2[i];
		i--;
	}
	return (dst);
}
