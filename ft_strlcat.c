/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:04:33 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/17 16:44:03 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	sizedest;

	if (!dest && !src)
		return (0);
	len = 0;
	sizedest = ft_strlen(dest);
	if (n < sizedest)
		return (ft_strlen(src) + n);
	if ((sizedest + 1) < n)
	{
		while ((*(src + len) != '\0') && (len < (n - sizedest - 1)))
		{
			*(dest + sizedest + len) = *(src + len);
			len++;
		}
		*(dest + sizedest + len) = '\0';
	}
	return (ft_strlen(src) + sizedest);
}
