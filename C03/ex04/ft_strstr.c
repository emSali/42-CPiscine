/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:55:08 by esali             #+#    #+#             */
/*   Updated: 2021/09/15 23:56:06 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	bool	needle;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		needle = true;
		j = 0;
		while (to_find[j] != '\0' && needle)
		{
			if (str[i + j] != to_find[j])
				needle = false;
			j++;
		}
		if (needle)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
