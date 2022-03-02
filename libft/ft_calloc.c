/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:13:43 by esali             #+#    #+#             */
/*   Updated: 2022/03/02 14:30:54 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	int		i;

	ret = (char *) malloc(count * size * sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < (int) (count * size))
	{
		ret[i] = '0';
		i++;
	}
	return (ret);
}
