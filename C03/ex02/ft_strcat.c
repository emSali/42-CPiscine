/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:55:23 by esali             #+#    #+#             */
/*   Updated: 2021/09/15 19:25:24 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	c_dest;
	int	i;

	c_dest = 0;
	while (dest[c_dest] != '\0')
		c_dest++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	dest[c_dest + i] = '\0';
	return (dest);
}
