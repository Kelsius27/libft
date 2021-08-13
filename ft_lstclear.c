/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:56:49 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/13 19:26:17 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;
	t_list	*next;

	if (!*lst)
		return ;
	element = *lst;
	while (element->next != '\0')
	{
		next = element->next;
		del(element->content);
		free(element);
		element = next;
	}
	*lst = '\0';
}
