/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:12:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/27 10:41:01 by esali            ###   ########.fr       */
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

char	*ft_strcat(int size, char **strs, char *sep)
{
	int i;
	int j;
	char *dest_ptr;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*dest_ptr = strs[i][j];
			dest_ptr++;
			j++;
		}
		if (i == size - 1)
		{
			*dest_ptr = '\0';
			return (dest_ptr);
		}
		else
		{
			j = 0;
			while(sep[j])
			{
				*dest_ptr = sep[j];
				dest_ptr++;
				j++;
			}
		}
	}
	return (dest_ptr);
}  


char *ft_strjoin(int size, char **strs, char *sep)
{
	int	count;
	char *output;

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
	output = ft_strcat(size, strs, sep);
	printf("output_length: %d\n", ft_strlen(output));
	return (output);
}
