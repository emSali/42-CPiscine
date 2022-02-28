/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:48:53 by esali             #+#    #+#             */
/*   Updated: 2022/02/26 12:51:55 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ne, size_t len)
{
	int		i;
	char	*help1;

	i = 0;
	help1 = (char *) hay;
	if (ft_strlen(ne) == 0)
		return (help1);
	while (help1 && i <= ((int) (len - ft_strlen(ne))))
	{
		if (ft_strncmp(help1, ne, ft_strlen(ne)) == 0)
			return (help1);
		help1++;
		i++;
	}
	return (NULL);
}
