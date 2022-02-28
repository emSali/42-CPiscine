/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:31:18 by esali             #+#    #+#             */
/*   Updated: 2022/02/17 17:51:57 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*s_help;

	i = 0;
	s_help = (char *) s;
	while (i <= (int) n)
	{
		if (*s_help == c)
			return ((char *) s_help);
		s_help++;
		i++;
	}
	return (NULL);
}
