/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:12:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/28 15:01:53 by esali            ###   ########.fr       */
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

void	ft_cat_sep(char **dest_ptr, char *sep)
{
	while (*sep)
	{
		**dest_ptr = *sep;
		sep++;
		*dest_ptr += 1;
	}
}

void	ft_strcat(int size, char *dest_ptr, char **strs, char *sep)
{
	int	j;
	int	i;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			*dest_ptr = strs[j][i];
			dest_ptr++;
			i++;
		}
		if (j == size - 1)
			*dest_ptr = 0;
		else if (*sep)
			ft_cat_sep(&dest_ptr, sep);
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	char	*output;
	char	*dest_ptr;

	if (size == 0)
	{
		output = (char *)malloc(1);
		return (output);
	}
	count = ft_count(size, strs, sep);
	output = (char *)malloc(sizeof(char *) * (count + 1));
	if (output == NULL)
		return (0);
	dest_ptr = output;
	ft_strcat(size, dest_ptr, strs, sep);
	return (output);
}
