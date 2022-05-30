/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:23:51 by esali             #+#    #+#             */
/*   Updated: 2022/05/30 19:01:24 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*re;
	int		i;

	if (start > ft_strlen(s) || start > len)
	{

		re = (char *)malloc(sizeof(char));
		if (re == NULL)
			return (NULL);
		re[0] = '\0';
		return (re);
	}
	i = 0;
	re = (char *) malloc(sizeof(char) * (len + 1));
	if (re == NULL)
		return (NULL);
	while ((i < (int) len) && (s[i] != '\0'))
	{
		re[i] = s[i + start];
		i++;
	}
	re[i] = '\0';
	return (re);
}