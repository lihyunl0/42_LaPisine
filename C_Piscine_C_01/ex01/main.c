/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:38:55 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/08 22:31:50 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int		a;
	char	c[3];

	c[1] = ' ';
	c[2] = '\n';

	a = 1;
	c[0] = a + 48;
	write(1, &c, 3);
	int *p1 = &a;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	ft_ultimate_ft(p9);
	c[0] = a / 10 + 48;
	write(1, &c, 1);
	c[0] = a % 10 + 48;
	write(1, &c, 3);
	return (0);
}
