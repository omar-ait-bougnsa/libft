/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-bou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:51:23 by oait-bou          #+#    #+#             */
/*   Updated: 2023/11/23 11:42:15 by oait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cont_w(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	if (!str)
		return (0);
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (count);
}

static char	**ft_free(char **str, int n)
{
	while (n > 0)
	{
		n--;
		free(str[n]);
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;
	int		n;

	n = 0;
	i = 0;
	p = (char **)malloc((cont_w(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (s != NULL && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != c && s[i] != '\0' && j++ >= 0)
			i++;
		p[n++] = ft_substr(s, i - j, j);
		if (p[n - 1] == NULL)
			return (ft_free(p, n));
	}
	p[n] = NULL;
	return (p);
}
