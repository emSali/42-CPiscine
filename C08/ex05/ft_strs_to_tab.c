/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:02:15 by esali             #+#    #+#             */
/*   Updated: 2021/09/29 17:27:34 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;
	int		i;

	count = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (count + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i; 
	t_stock_str *ts;

	i = 0;
	ts = (struct s_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ts == NULL)
		return (NULL);
	while(i < ac)
	{
		ts[i].size = ft_strlen(av[i]);
		ts[i].str = av[i];
		ts[i].copy = ft_strdup(av[i]);
		i++;
	}
	ts[i].size = 0;
	ts[i].str = 0;
	ts[i].copy = 0;
	return (ts);
}