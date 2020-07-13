/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl </var/mail/seunghyl>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:55:00 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 10:58:14 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char	arr[6] = {'a', 'b', 'c', 'd', '\0', };
	printf("abcd, %d\n", ft_str_is_alpha(arr));
	printf("123a, %d\n", ft_str_is_alpha("123a\0"));
	return (0);
}
