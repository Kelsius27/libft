/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:29:25 by kmarques          #+#    #+#             */
/*   Updated: 2021/07/31 19:29:26 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	int		i;

	i = 0;
	while (*(s + i))
		i++;
	dst = malloc(i + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(dst + i) = *(s + i);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
