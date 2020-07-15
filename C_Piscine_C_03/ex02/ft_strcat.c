/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:05:16 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/15 11:54:57 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;
	int src_index;

	index = 0;
	while (dest[index] != '\0')
		index++;
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[index + src_index] = src[src_index];
		src_index++;
	}
	dest[index + src_index] = '\0';
	return (dest);
}
