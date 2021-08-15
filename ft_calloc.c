/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:29:21 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/13 19:01:41 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocated a pointer with malloc and iniciate it with NULL
 *
 * @param nelem Number of elements
 * @param elsize Size of element
 * @return void* Pointer
 */
void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*elems;
	size_t			i;

	elems = malloc(nelem * elsize);
	if (elems == NULL)
		return (NULL);
	i = 0;
	while (i < (nelem * elsize))
	{
		(*elems) = '\0';
		i++;
		elems++;
	}
	return (elems - i);
}
