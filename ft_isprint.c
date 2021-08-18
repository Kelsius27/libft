/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:40:37 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:22:07 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Tests if it is printable
 *
 * @param c
 * @return int 2 for lowewrcase, 1 for upper, 4 for number, 16 for the rest
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		if (c >= 'a' && c <= 'z')
			return (2);
		else if (c >= 'A' && c <= 'Z')
			return (1);
		else if (c >= '0' && c <= '9')
			return (4);
		return (16);
	}
	return (0);
}
