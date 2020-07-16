/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghyl <lutious2@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 14:01:22 by seunghyl          #+#    #+#             */
/*   Updated: 2020/07/16 09:40:46 by seunghyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_char(char c)
{
	if (c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r'
			|| c == ' ')
		return (1);
	if (c == '-')
		return (-1);
	if (c == '+')
		return (-2);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int count;
	int result;

	i = 0;
	while (check_char(str[i]) == 1)
		i++;
	count = 0;
	while (check_char(str[i]) < 0)
	{
		if (check_char(str[i]) == -1)
			count++;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	result = str[i++] - '0';
	while (check_char(str[i]) == 2)
		result = result * 10 + str[i++] - '0';
	if (count % 2 == 1)
		result *= -1;
	return (result);
}
