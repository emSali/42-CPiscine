/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:16:44 by esali             #+#    #+#             */
/*   Updated: 2021/09/26 15:33:35 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int	g_strstr;
int	g_i = 0;
int	g_j = 0;

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

//returns next occurens of charset
int	ft_strstr(char *str, char *charset, int i)
{
	int		j;
	bool	found;

	while (str[i] != '\0')
	{
		found = true;
		j = 0;
		while (charset[j] != '\0' && found)
		{
			if (str[i + j] != charset[j])
				found = false;
			j++;
		}
		if (found)
			return (i + 1);
		i++;
	}
	return (0);
}

int	count_array(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		g_strstr = ft_strstr(str, charset, i);
		if (g_strstr == 0)
			break ;
		else if (g_strstr - 1 == i)
			i = i + ft_len(charset);
		else
		{
			i = g_strstr + ft_len(charset) - 1;
			count++;
		}
	}
	if (g_strstr == ft_len(str) - ft_len(charset) + 1)
		count = count - 1;
	return (count);
}

void	fill_arr(char *str, char *set, int words, char **res)
{
	while (g_j < words && str[g_i])
	{
		g_strstr = ft_strstr(str, set, g_i);
		if (g_strstr == 0)
			break ;
		else if (g_strstr - 1 == g_i)
		{
			if (ft_strstr(str, set, g_i + ft_len(set)) > g_i + ft_len(set))
			{
				res[g_j++] = &str[g_i];
			}
			g_i += ft_len(set);
		}
		else
		{
			if (ft_strstr(str, set, g_i + ft_len(set)) > g_i + ft_len(set))
			{
				res[g_j++] = &str[g_i];
			}
			g_i = g_strstr + ft_len(set) - 1;
		}
	}
	res[words + 1] = 0;
}

//Return Array of Pointers pointing to elements of str 
//QUESTION: pointing into position in str?
//PROBLEM: pointer to just one word and not to element in str

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		count;

	if (*str == '\0' || *charset == '\0')
		return (NULL);
	count = count_array(str, charset);
	printf("count is: %d\n", count);
	res = (char **)malloc(sizeof(char *) * (count + 2));
	fill_arr(str, charset, count + 1, res);
	return (res);
}
