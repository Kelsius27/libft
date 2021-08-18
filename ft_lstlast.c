/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:01:44 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:28:00 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Find the last element of a list
 *
 * @param lst First element
 * @return t_list* Last element
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*element;

	if (!lst)
		return (NULL);
	element = lst;
	while (element->next != NULL)
		element = element->next;
	return (element);
}
