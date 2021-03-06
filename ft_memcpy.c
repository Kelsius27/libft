/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:13:21 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:56:32 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy N chars of Src to Dst
 *
 * @param dst Pointer to destiny
 * @param src Pointer to source
 * @param len Length
 * @return void* Pointer to destiny
 */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < len)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (d);
}
