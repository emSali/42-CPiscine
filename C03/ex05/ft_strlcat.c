/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 23:40:35 by esali             #+#    #+#             */
/*   Updated: 2021/09/16 12:11:57 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c_dest;
	unsigned int	c_src;
	unsigned int	i;

	c_dest = 0;
	while (dest[c_dest] != '\0')
		c_dest++;
	c_src = 0;
	while (src[c_src] != '\0')
		c_src++;
	if (size <= c_dest)
		return (c_src + size);
	i = 0;
	while (src[i] != '\0' && i < (size - c_dest - 1))
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	dest[c_dest + i] = '\0';
	return (c_src + c_dest);
}
