/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 16:04:07 by esali             #+#    #+#             */
/*   Updated: 2022/03/03 12:59:35 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numsplit(const char *s, char c)
{
	int i;
	int num;

	i = 1;
	num = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			num++;
		i++;
	}
	return (num + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		s_count;

	split = (char **) malloc(sizeof(char *) * (numsplit(s, c) + 1));
	if (split == NULL)
		return (NULL);
	s_count = 0;
	i = 0;
	while (i < numsplit(s, c))
	{
		split[i] = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (split[i] == NULL)
			return (NULL);
		j = 0;
		while ((s[s_count] != '\0'))
		{
			split[i][j] = s[s_count];
			s_count++;
			j++;
			if ((s[s_count] == c))
				break;
		}
		split[i][j] = '\0';
		printf("i: %i\n", i);
		i++;
	}
	split[i] = NULL;
	return(split);
}
