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
	size_t	i;

	while (*s != '\0')
	{
		i = 0;
		while ((*s == *(find + i)) && (*s != '\0'))
		{
			s++;
			i++;
			slen--;
		}
		if ((int)slen < 0)
			return ('\0');
		if (*(find + i) == '\0')
			return ((char *)s - i);
		s++;
		slen--;
	}
	return ('\0');
}
