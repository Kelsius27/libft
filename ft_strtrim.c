/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 20:18:23 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/04 18:27:36 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findstart(char const *s1, char const *set)
{
	int	start;
	int	i;

	start = 0;
	while (*(s1 + start))
	{
		i = 0;
		while (*(set + i))
		{
			if (*(set + i) == *(s1 + start))
				break ;
			i++;
		}
		if (*(set + i) == '\0')
			break ;
		start++;
	}
	return (start);
}

static int	ft_findend(char const *s1, char const *set)
{
	int	end;
	int	i;

	end = ft_strlen(s1) - 1;
	while (end > 0)
	{
		i = 0;
		while (*(set + i))
		{
			if (*(set + i) == *(s1 + end))
				break ;
			i++;
		}
		if (*(set + i) == '\0')
			break ;
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	return (ft_substr(s1, start, (end - start + 1)));
}
