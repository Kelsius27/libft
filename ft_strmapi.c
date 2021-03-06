/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:13:26 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:40:04 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*newstr;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen((const char *)s);
	newstr = malloc((size + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (*(s + i))
	{
		*(newstr + i) = f(i, *(s + i));
		i++;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
