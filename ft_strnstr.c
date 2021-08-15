/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:45:38 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/04 18:26:38 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	j;

	j = 0;
	if ((s[0] == '\0') && (find[0] == '\0'))
		return ((char *)s);
	while (*(s + j) != '\0')
	{
		if ((j + ft_strlen(find)) > slen)
			return (NULL);
		if (ft_strncmp((s + j), find, ft_strlen(find)) == 0)
			return ((char *)(s + j));
		j++;
	}
	return (NULL);
}
