/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:31:27 by oait-bou          #+#    #+#             */
/*   Updated: 2023/11/19 16:22:21 by oait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *fin, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)str;
	i = 0;
	if (fin[0] == '\0')
		return ((char *)str);
	while (s[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && s[i + j] == fin[j] && fin[j] != '\0')
			j++;
		if (fin[j] == '\0')
			return (&s[i]);
		i++;
	}
	return (0);
}
