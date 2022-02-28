/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:21:41 by esali             #+#    #+#             */
/*   Updated: 2022/02/26 17:26:44 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*help;
	int		len;
	int		i;

	len = ft_strlen(s1);
	help = (char *) malloc(len * sizeof(char));
	if (help == NULL)
		return (NULL);
	i = 0;
	while(i <= len)
	{
		help[i] = s1[i];
		i++;
	}
	return (help);
}