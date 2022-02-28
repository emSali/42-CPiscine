/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:29:25 by esali             #+#    #+#             */
/*   Updated: 2022/02/17 17:49:13 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	int		i;
	int		dst_len;

	dst_len = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src) + dst_len);
	d = dst;
	i = 0;
	while (src && i < ((int) dstsize - 1 - dst_len))
	{
		d[dst_len + i] = src[i];
		i++;
	}
	d[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}
