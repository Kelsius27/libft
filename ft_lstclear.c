/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:56:49 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:23:59 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Delete all elements
 *
 * @param lst First element to the deleted
 * @param del Function to delete
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;
	t_list	*next;

	element = *lst;
	while (element)
	{
		next = element->next;
		ft_lstdelone(element, del);
		element = next;
	}
	*lst = NULL;
}
