/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:50:08 by esali             #+#    #+#             */
/*   Updated: 2021/09/27 15:50:26 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	count_strs(char *str, char *sep)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	if (!is_sep(str[0], sep))
		count++;
	while (str[i + 1])
	{
		if (is_sep(str[i], sep) && !is_sep(str[i + 1], sep))
			count++;
		i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *sep, int i)
{
	int	count;

	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], sep))
			return (count);
		i++;
		count++;
	}
	return (count);
}

char	*save_string(char *str, char *sep, char *res, int i)
{
	int	j;

	j = 0;
	res = (char *)malloc(sizeof(char) * (ft_strlen(str, sep, 0) + 1));
	while (str[i])
	{
		if (is_sep(str[i], sep))
		{
			res[j] = '\0';
			return (res);
		{
		res[j] = str[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char *str, char *sep)
{
	int		count;
	int		i;
	int		j;
	char	**res;
	
	count = count_strs(str, sep);
	printf("words: %d\n", count);
	res = (char **)malloc(sizeof(char *) * (count + 1));
	if (res == NULL)
		return (0);
	j = 0;
	i = 0;
	if (!is_sep(str[0], sep))
	{
		res[0] = save_string(str, sep, res[0], 0);
		j = ft_strlen(str, sep, 0);
		i++;
	}
	res[i] = (char *)malloc(sizeof(char) * 1);
	res[i] = "0";
	return (res);
}