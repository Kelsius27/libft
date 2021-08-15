/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:04:51 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/06 11:30:41 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (*(s + i + 1) != '\0')
	{
		if ((*(s + i + 1) == c) && (*(s + i) != c))
			words++;
		i++;
	}
	if (*(s + i) != c)
		words++;
	return ((char **)ft_calloc((size_t)words + 1, sizeof(char *)));
}

char	**ft_freepointer(char **p)
{
	int	i;

	i = 0;
	while (*(p + i))
	{
		free(*(p + i));
		i++;
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	char	*start;
	int		i;

	i = 0;
	splited = ft_countwords(s, c);
	if (splited == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while ((*s) && (*s != c))
				s++;
			*(splited + i) = (char *)malloc((s - start + 1) * sizeof(char));
			if (*(splited + i) == NULL)
				return (ft_freepointer(splited));
			ft_strlcpy(*(splited + i++), start, (s - start + 1));
		}
		else
			s++;
	}
	return (splited);
}
