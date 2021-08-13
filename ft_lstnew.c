/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:27:55 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/09 16:15:01 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = (t_list *)malloc(sizeof(t_list));
	if (newelement == '\0')
		return ('\0');
	newelement->content = content;
	newelement->next = '\0';
	return (newelement);
}
