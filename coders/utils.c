/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:31:57 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 12:55:34 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/utils.h"

int	is_num(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

long	ft_atol(char *s)
{
	size_t	i;
	long	res;

	i = 0;
	res = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (is_num(s[i]))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	if (s[0] == '-')
		return (-res);
	return (res);
}
