/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:33:52 by kmarques          #+#    #+#             */
/*   Updated: 2021/07/29 21:33:53 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*string1 < *string2)
			return (*string1 - *string2);
		else if (*string1 > *string2)
			return (*string1 - *string2);
		else
		{
			string1++;
			string2++;
			i++;
		}
		if ((*string1 == '\0') && (*string2 == '\0'))
			return (0);
	}
	return (0);
}
