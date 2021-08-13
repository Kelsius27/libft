/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:55:54 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/09 19:16:15 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	len;
	size_t	sizesrc;

	sizesrc = 0;
	while (*(src + sizesrc))
		sizesrc++;
	len = 0;
	while ((*src != '\0') && (len < (n - 1)))
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	return (sizesrc);
}
