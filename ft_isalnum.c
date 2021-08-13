/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 19:27:05 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/13 19:03:35 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Tests if 'c' is a alphanumeric
 *
 * @param c Int to be tested
 * @return int 1 for upcase 2 for lowcase 4 for number
 */
int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (4);
	return (0);
}
