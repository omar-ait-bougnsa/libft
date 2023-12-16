/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:15:12 by oait-bou          #+#    #+#             */
/*   Updated: 2023/11/14 16:25:04 by oait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	if (dest == NULL && size == 0)
		return (ft_strlen(src + size));
	lend = ft_strlen(dest);
	lens = ft_strlen(src);
	if (size == 0 || size <= lend)
		return (lens + size);
	j = lend + lens;
	i = 0;
	while (src[i] != '\0' && lend + 1 < size)
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return (j);
}
