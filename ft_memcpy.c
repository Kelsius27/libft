/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:13:21 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/04 19:17:25 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

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
