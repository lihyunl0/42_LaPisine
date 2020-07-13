/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutiou2@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:27:52 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 11:30:49 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
		printf("abc, %d\n", ft_str_is_lowercase("abc"));
		printf("ab12, %d\n", ft_str_is_lowercase("ab12"));
		printf("123, %d\n", ft_str_is_lowercase("123"));
		printf("!@#, %d\n", ft_str_is_lowercase("!@#"));
		printf("ABC, %d\n", ft_str_is_lowercase("ABC"));
		printf("Aa, %d\n", ft_str_is_lowercase("Aa"));
		printf(", %d\n", ft_str_is_lowercase(""));
		return (0);
}
