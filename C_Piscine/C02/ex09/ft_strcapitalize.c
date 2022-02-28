/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:05:46 by esali             #+#    #+#             */
/*   Updated: 2021/09/15 17:07:00 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lower(char *str, int i)
{
	if (str[i] > 96 && str[i] < 123)
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
			to_lower(str, i);
		else if (str[i - 1] > 90 && str[i - 1] < 97)
			to_lower(str, i);
		else if (str[i - 1] > 122 && str[i - 1] < 127)
			to_lower(str, i);
		else if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
