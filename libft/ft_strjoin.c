/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:53:09 by esali             #+#    #+#             */
/*   Updated: 2022/03/02 15:08:56 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*re;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	re = (char *) malloc((len + 1) * sizeof(char));
	if (re == NULL)
		return (NULL);
	re = ft_strdup(s1);
	ft_strlcat(re, s2, len + 1);
	return (re);
}