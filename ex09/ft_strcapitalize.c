/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:01:52 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/13 17:04:38 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_1(char *str, int index)
{
	int		i;

	i = index - 1;
	if (index == 0)
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		return (0);
	if (str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	return (1);
}

void	sm_big_ch(char *str, int index)
{
	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;
}

void	big_sm_ch(char *str, int index)
{
	if (str[index] >= 'A' && str[index] <= 'Z')
		str[index] = str[index] + 32;
}

char	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (check_1(str, index))
			sm_big_ch(str, index);
		else
			big_sm_ch(str, index);
		index++;
	}
	return (str);
}
