/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 18:22:16 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 13:03:30 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iniciate B with Len chars C
 *
 * @param b Pointer do memory space
 * @param c Char
 * @param len Length
 * @return void* Pointer do B
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		(*(unsigned char *)b) = (unsigned char)c;
		i++;
		b++;
	}
	return (b - i);
}
