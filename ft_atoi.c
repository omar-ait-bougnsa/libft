/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:46:17 by oait-bou          #+#    #+#             */
/*   Updated: 2023/11/09 19:47:22 by oait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	a;
	int		b;
	int		i;

	a = 0;
	b = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		b = b * (-1);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (a * b);
}