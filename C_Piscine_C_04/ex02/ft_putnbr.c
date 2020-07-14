/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:01:10 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/14 15:20:21 by seunghyl         ###   ########.fr       */
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
		nb /= -10;
		if (nb > 10)
			rev_putnbr(nb);
		write(1, &temp, 1);
	}
	else
		rev_putnbr(nb);
}
