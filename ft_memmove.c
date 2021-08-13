/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:30:34 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/04 19:17:43 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	d = (char *)dst;
	s = (char *)src;
	if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
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
