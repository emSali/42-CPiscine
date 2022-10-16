/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 09:03:43 by esali             #+#    #+#             */
/*   Updated: 2021/09/13 14:51:11 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	save_first;
	int	last_arr;

	count = 0;
	last_arr = size - 1;
	while (count < (size / 2))
	{
		save_first = *(tab + count);
		*(tab + count) = *(tab + last_arr);
		*(tab + last_arr) = save_first;
		count++;
		last_arr--;
	}
}
