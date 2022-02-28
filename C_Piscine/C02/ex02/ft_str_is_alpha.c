/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:32:54 by esali             #+#    #+#             */
/*   Updated: 2021/09/14 18:52:49 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alphabetic;

	is_alphabetic = 1;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122)
		{
			is_alphabetic = 0;
		}
		else if (*str > 90 && *str < 97)
		{
			is_alphabetic = 0;
		}
		str++;
	}
	return (is_alphabetic);
}
