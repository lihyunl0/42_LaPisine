/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutiou2@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:39:42 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/15 15:34:39 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_putnbr(int n)
{
	char temp;

	temp = n % 10 + '0';
	if (n >= 10)
		rev_putnbr(n / 10);
	write(1, &temp, 1);
}

void	ft_putnbr(int nb)
{
	char temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		temp = nb % 10 * (-1) + '0';
		if (nb <= -10)
			ft_putnbr(nb / -10);
		write(1, &temp, 1);
	}
	else
		rev_putnbr(nb);
}
