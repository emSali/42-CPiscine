/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:10:37 by esali             #+#    #+#             */
/*   Updated: 2021/09/14 18:50:50 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 127)
		{
			is_printable = 0;
		}
		str++;
	}
	return (is_printable);
}
