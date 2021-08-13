/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:05:32 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/13 18:59:49 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fill pointer with '\0'
 *
 * @param b Pointer
 * @param len Size to fill
 */
void	ft_bzero(void *b, size_t len)
{
	int	i;

	i = 0;
	while (i < (int)len)
	{
		(*(unsigned char *)b) = '\0';
		i++;
		b++;
	}
}
