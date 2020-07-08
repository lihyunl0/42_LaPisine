/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 23:17:56 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/08 23:20:31 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tan, int size);

int		main(void)
{
	int		aa[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int		size = 10;

	ft_rev_int_tab(aa, size);

	for(int i = 0; i < 10; i++)
	{
		printf("%d ", aa[i]);
	}
}
