/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 20:56:03 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/15 18:58:30 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				check;

	i = 0;
	check = 0;
	while (i < n)
	{
		if (check == 1 || src[i] == '\0')
		{
			dest[i] = '\0';
			check = 1;
		}
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}
