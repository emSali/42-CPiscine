/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:03:03 by galpers           #+#    #+#             */
/*   Updated: 2021/09/27 09:05:58 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		z = i + 1;
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		if ((base[i] == '+') || (base [i] == '-'))
			return (0);
		while (base[z] != '\0')
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

int	ft_beginning(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		else
			return (i);
	}
	return (i);
}

int	ft_is_inbase(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != a)
	{
		if (base[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_get_int_from_base(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == a)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
