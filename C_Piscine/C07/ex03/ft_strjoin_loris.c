/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 19:10:18 by lpenelon          #+#    #+#             */
/*   Updated: 2021/09/23 14:27:36 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*output;
	int		i;

	if (size == 0)
	{
		output = (char *) malloc(1);
		return (output);
	}
	count = ft_count(size, strs, sep);
	output = (char *) malloc(sizeof(char) * (count + 1));
	if (output == NULL)
		return (0);
	i = 0;
	while (i < size - 1)
	{
		output = ft_strcpy(output, strs[i++]);
		output = ft_strcpy(output, sep);
	}
	output = ft_strcpy(output, strs[i]);
	*output = '\0';
	return (output - count);
}
