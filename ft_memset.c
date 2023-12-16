/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:51:07 by oait-bou          #+#    #+#             */
/*   Updated: 2023/11/13 18:11:46 by oait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t s)
{
	size_t			n;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	n = 0;
	while (n < s)
	{
		str[n] = (unsigned char)c;
		n++;
	}
	return (ptr);
}
