/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:15:51 by kmarques          #+#    #+#             */
/*   Updated: 2021/08/18 12:16:23 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convert ANSI to int
 *
 * @param str Number to convert
 * @return int
 */
static int	ft_definesign(const char *str)
{
	if (*str == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	count;

	num = 0;
	count = 0;
	sign = 1;
	while ((*str == ' ') || ((*str >= '\t') && (*str <= '\r')))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		sign = ft_definesign(str);
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
		count++;
	}
	if (count > 10 && sign == 1)
		return (-1);
	else if (count > 10)
		return (0);
	return (sign * num);
}
