/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:20:42 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/12 14:21:03 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		temp;
	int		index;
	int		rev_index;

	index = 0;
	rev_index = size - 1;
	while (index < rev_index)
	{
		temp = *(tab + index);
		*(tab + index) = *(tab + rev_index);
		*(tab + rev_index) = temp;
		index++;
		rev_index--;
	}
}
