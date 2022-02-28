/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_greg.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 07:50:39 by galpers           #+#    #+#             */
/*   Updated: 2021/09/28 21:55:16 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *base);

int	ft_beginning(char *str);

int	ft_is_inbase(char a, char *base);

int	ft_get_int_from_base(char a, char *base);

int	ft_strlen(char *str);

long	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		neg;
	long	result;
	int		sizebase;

	sizebase = ft_strlen(base);
	neg = 1;
	i = ft_beginning(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	result = 0;
	while (i++, str[i - 1] != '\0' && ft_is_inbase(str[i - 1], base) == 1)
	{
		result = result * sizebase + ft_get_int_from_base(str[i - 1], base);
	}
	result = result * neg;
	return (result);
}

int	ft_number_length(long nb, char *base_to)
{
	int	i;
	int	sizebase;

	sizebase = ft_strlen(base_to);
	i = 0;
	if (nb <= 0)
	{	
		i = 1;
		nb = -nb;
	}
	while (nb != 0)
	{
		nb = nb / sizebase;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(long nb, char *base_to)
{
	char	*nbr;
	int		i;
	int		sizebase;
	int		j;

	if (ft_check_base(base_to) == 1)
		sizebase = ft_strlen(base_to);
	else
		return (NULL);
	i = ft_number_length(nb, base_to);
	j = 0;
	nbr = (char *)malloc(sizeof (char *) * (i));
	if (nb < 0)
	{
		nbr[0] = '-';
		nb = -nb;
		j = 1;
	}
	nbr[i] = '\0';
	while (--i >= j)
	{
		nbr[i] = base_to[nb % sizebase];
		nb = nb / sizebase;
	}
	return (nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	result;
	char	*number;

	if (ft_check_base(base_from) == 0)
		return (NULL);
	result = ft_atoi_base(nbr, base_from);
	if (result > 2147483647 || result < -2147483648)
		return (NULL);
	else
	{
		number = ft_itoa_base(result, base_to);
		return (number);
	}
}
