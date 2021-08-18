/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:24:40 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:19:47 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add new element at the end of the list
 *
 * @param lst Pointer to pointer of first element
 * @param new New element
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*element;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	element = *lst;
	while (element->next != NULL)
		element = element->next;
	element->next = new;
}
