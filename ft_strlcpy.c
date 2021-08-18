/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:55:54 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 11:12:26 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = 0;
	if (n != 0)
	{
		while ((*(src + len) != '\0') && (len < n - 1))
		{
			*(dest + len) = *(src + len);
			len++;
		}
		*(dest + len) = '\0';
	}
	return (ft_strlen(src));
}
