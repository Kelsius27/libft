/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:12:38 by kmarques          #+#    #+#             */
/*   Updated: 2021/07/29 21:35:06 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = '\0';
	while (*s)
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	if (c == '\0')
		p = (char *)s;
	return (p);
}
