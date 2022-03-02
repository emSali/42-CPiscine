/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:30:45 by esali             #+#    #+#             */
/*   Updated: 2022/03/02 16:03:02 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*re;
	int		i;
	int		j;
	int		k;
	int		b;

	re = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (re == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i <= (int) ft_strlen(s1))
	{
		j = 0;
		b = 1;
		while (j < (int) ft_strlen(set))
		{
			if (s1[i] == set[j++])
				b = 0;
		}
		if (b)
			re[k++] = s1[i];
		i++;
	}
	return (re);
}
