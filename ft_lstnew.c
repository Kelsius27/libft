/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:27:55 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:29:39 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create new element
 *
 * @param content Content to element
 * @return t_list* New element
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = (t_list *)malloc(sizeof(t_list));
	if (newelement == NULL)
		return (NULL);
	newelement->content = content;
	newelement->next = NULL;
	return (newelement);
}
