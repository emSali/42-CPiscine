/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:50:08 by esali             #+#    #+#             */
/*   Updated: 2021/09/28 21:04:21 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int	g_i = 0;
int	g_j = 1;
int	g_count = 0;

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
	res = (char *)malloc(sizeof(char) * (ft_strlen(str, sep, i) + 1));
	if (res == NULL)
		return (0);
	while (str[i])
	{
		if (is_sep(str[i], sep))
		{
			res[j] = 0;
			return (res);
		}
		res[j] = str[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}

char	**ft_split(char *str, char *sep)
{
	char	**res;

	g_count = count_strs(str, sep);
	res = (char **)malloc(sizeof(char *) * (ft_strlen(str, "", 0) + 1));
	if (res == NULL)
		return (0);
	if (!is_sep(str[0], sep))
	{
		res[0] = save_string(str, sep, res[0], 0);
		g_j = ft_strlen(str, sep, 0);
		g_i++;
	}
	while (str[g_j] && g_i < g_count)
	{
		if (is_sep(str[g_j - 1], sep) && !is_sep(str[g_j], sep))
		{
			res[g_i] = save_string(str, sep, res[g_i], g_j);
			g_j = g_j + ft_strlen(str, sep, g_j) - 1;
			g_i++;
		}
		g_j++;
	}
	res[g_i] = (char *)malloc(sizeof(char) * 1);
	res[g_i] = 0;
	return (res);
}
