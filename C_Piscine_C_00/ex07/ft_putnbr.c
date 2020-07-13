/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 14:54:08 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 17:32:21 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_zero(void)
{
	char c;

	c = '0';
	write(1, &c, 1);
}

void	print_plus(int *nums, int *index)
{
	char c;

	while (*index >= 0)
	{
		c = nums[(*index)--] + 48;
		write(1, &c, 1);
	}
}

void	print_minus(int *nb, int *nums, int *index)
{
	char c;

	c = '-';
	write(1, &c, 1);
	nums[(*index)++] = (*nb % 10) * -1;
	*nb /= -10;
}

void	ft_putnbr(int nb)
{
	int		nums[10];
	int		index;

	index = 0;
	if (nb == 0)
	{
		print_zero();
		return ;
	}
	if (nb < 0)
		print_minus(&nb, nums, &index);
	while (nb / 10 > 0)
	{
		nums[index++] = nb % 10;
		nb /= 10;
	}
	if (nb != 0)
		nums[index] = nb;
	else
		index--;
	print_plus(nums, &index);
}
