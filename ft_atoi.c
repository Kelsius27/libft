/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarques <kmarques@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 19:15:51 by kmarques          #+#    #+#             */
/*   Updated: 2021/07/30 19:15:51 by kmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convert ANSI to int
 *
 * @param str Number to convert
 * @return int
 */

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\f') || (*str == '\v') || (*str == '\r')
		|| (*str == '\n') || (*str == '\t'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str)
	{
		if ((*str < '0') || (*str > '9'))
			break ;
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}
