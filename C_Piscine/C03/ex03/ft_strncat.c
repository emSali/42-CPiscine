/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:23:24 by esali             #+#    #+#             */
/*   Updated: 2021/09/15 22:19:09 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				c_dest;
	unsigned int	i;

	c_dest = 0;
	while (dest[c_dest] != '\0')
		c_dest++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	dest[c_dest + i] = '\0';
	return (dest);
}
