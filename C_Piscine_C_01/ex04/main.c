/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 22:32:06 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/08 22:35:21 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);
int		main(void)
{
	int a = 11;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("%d, %d\n", a, b);

	return 0;
}

