/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:30:34 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 13:01:36 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copy Len chars of Src to Dest. They can overlap.
 *
 * @param dst Destiny
 * @param src Source
 * @param len Length
 * @return void* Pointer to destiny
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (!dst && !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (src > dst)
		ft_memcpy(d, s, len);
	else
	{
		while (len > 0)
		{
			len--;
			*(d + len) = *(s + len);
		}
	}
	return (d);
}
