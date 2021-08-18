/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:56:39 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:37:51 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*nword;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	nword = ft_calloc(size, sizeof(char));
	if (nword == NULL)
		return (NULL);
	ft_strlcpy(nword, (char *)s1, ft_strlen(s1) + 1);
	ft_strlcat(nword, (char *)s2, size + 1);
	return (nword);
}
