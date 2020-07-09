/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 11:37:21 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/09 21:46:59 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char num[5];

	num[0] = '0';
	num[3] = ',';
	num[4] = ' ';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				write(1, &num[0], 3);
				if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
				{
					write(1, &num[3], 2);
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
