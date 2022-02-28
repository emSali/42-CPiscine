/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:12:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/26 19:52:44 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int ft_count(int size, char **strs, char *sep)
{
	int i; 
	int count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	printf("count is: %d\n", count);
	return (count);
}

char	*ft_strcat(char *dest, char *src, int j)
{
	int	c_dest;
	int	i;

	c_dest = 0;
	if (j != 0)
	{
		while (dest[c_dest] != '\0')
			c_dest++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	return (dest);
} 

char *ft_strjoin(int size, char **strs, char *sep)
{
	int	count;
	char *output;
	int	i;

	if (size == 0)
	{
		output = malloc(1);
		output = 0;
		return (output);
	}
	count = ft_count(size, strs, sep);
	output = (char *)malloc(sizeof(char *) * (count + 1));
	if (output == NULL)
		return (0);
	i = 0;
	 while (i < size - 1)
	{
		ft_strcat(output, strs[i], i);
		ft_strcat(output, sep, i + 1);
		i++;
	}
	ft_strcat(output, strs[i], i);
	output[count] = '\0';
	printf("output_length: %d\n", ft_strlen(output));
	return (output);
}
