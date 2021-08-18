/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:25:26 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:55:09 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare N chars of S1 and S2
 *
 * @param s1 First string
 * @param s2 Secong string
 * @param n Number of chars to compare
 * @return int 0 if equal positive for 1>2 and negative for 2>1
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(string1 + i) != *(string2 + i))
			return (*(string1 + i) - *(string2 + i));
		i++;
	}
	return (0);
}
