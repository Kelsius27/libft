/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:38:31 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:30:30 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the size of list
 *
 * @param lst First element
 * @return int Number of elements of list
 */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*element;

	if (!lst)
		return (0);
	element = lst;
	count = 1;
	while (element->next != NULL)
	{
		count++;
		element = element->next;
	}
	return (count);
}
