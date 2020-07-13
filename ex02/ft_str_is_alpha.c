/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutiou2@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:56:22 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 10:57:57 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 'A' && str[index] <= 'Z')
				&& !(str[index] >= 'a' && str[index] <= 'z'))
			return (0);
		index++;
	}
	return (1);
}
