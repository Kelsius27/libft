/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:04:33 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/09 19:15:55 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	sizesrc;
	size_t	sizedest;

	sizesrc = 0;
	while (*(src + sizesrc))
		sizesrc++;
	sizedest = 0;
	while (*(dest + sizedest))
		sizedest++;
	dest = dest + sizedest;
	len = 0;
	while ((*src != '\0') && (len < (n - sizedest - 1)))
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	return (sizesrc + sizedest);
}
