/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 19:30:12 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/05 19:00:31 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	char	*sub;

	n = ft_strlen((s + start));
	if (n > len)
		n = len;
	if (ft_strlen(s) < start)
		n = 0;
	sub = ft_calloc((n + 1), sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, (char *)(s + start), (n + 1));
	return (sub);
}
