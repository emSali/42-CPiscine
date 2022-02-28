/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:04:57 by esali             #+#    #+#             */
/*   Updated: 2021/09/13 15:33:20 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count1;
	int	count2;
	int	help;

	count1 = 0;
	while (count1 < size)
	{
		count2 = 0;
		while (count2 < size - 1)
		{
			if (*(tab + count2) > *(tab + count2 + 1))
			{
				help = *(tab + count2);
				*(tab + count2) = *(tab + count2 + 1);
				*(tab + count2 + 1) = help;
			}
			count2++;
		}
		count1++;
	}
}
