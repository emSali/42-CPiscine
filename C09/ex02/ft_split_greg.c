/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:45:31 by galpers           #+#    #+#             */
/*   Updated: 2021/09/27 15:58:19 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int pos, int size)
{
	char	*str;
	int		i;

	str = malloc(sizeof(str) *(size + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = src[pos + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_charset(char *src, int pos, char *charset)
{
	int	i;

	i = 0;
	while (i < ft_strlen(charset))
	{
		if (src[pos] == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_wrdlen(char *str, int pos, char *charset)
{
	int	i;

	i = 0;
	while (str[pos + i] != '\0' && ft_is_charset(str, (pos + i), charset) == 1)
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	split = malloc(sizeof (*split) * (ft_strlen(str) + 1));
	if (split == NULL)
		return (0);
	while (i < ft_strlen(str))
	{
		if (ft_is_charset(str, i, charset) == 1)
		{
			size = ft_wrdlen(str, i, charset);
			{
				split[j] = ft_strdup(str, i, size);
				i = i + size;
				j++;
			}
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
