/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutiou2@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:02:35 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 12:03:52 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
		printf("abc, %d\n", ft_str_is_uppercase("abc"));
		printf("ab12, %d\n", ft_str_is_uppercase("ab12"));
		printf("123, %d\n", ft_str_is_uppercase("123"));
		printf("!@#, %d\n", ft_str_is_uppercase("!@#"));
		printf("ABC, %d\n", ft_str_is_uppercase("ABC"));
		printf("Aa, %d\n", ft_str_is_uppercase("Aa"));
		printf(", %d\n", ft_str_is_uppercase(""));
		return (0);
}
