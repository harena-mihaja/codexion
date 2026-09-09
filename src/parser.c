/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:28:59 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/09 12:39:07 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "utils.h"

static long	parse_time(char *str);
static int	parse_int(char *str);

t_config	parse_config(char **argv)
{
	t_config	config;

	config.num_coders = parse_int(argv[1]);
	config.time_burnout = parse_time(argv[2]);
	config.time_compile = parse_time(argv[3]);
	config.time_debug = parse_time(argv[4]);
	config.time_refactor = parse_time(argv[5]);
	config.num_compiles = parse_int(argv[6]);
	config.dongle_cooldown = parse_time(argv[7]);
	config.scheduler = argv[8];
	return (config);
}

static int	parse_int(char *str)
{
	size_t	len;
	size_t	i;
	long	tmp;

	if (str[0] != '+' && str[0] != '-' && !is_num(str[0]))
		return (-1);
	tmp = ft_atol(str);
	if (tmp > INT_MAX || tmp < INT_MIN)
		return (-1);
	len = strlen(str);
	i = 1;
	while (i < len)
	{
		if (!is_num(str[i]))
			return (-1);
		i++;
	}
	return (atoi(str));
}

static long	parse_time(char *str)
{
	size_t	len;
	size_t	i;

	if (str[0] != '+' && str[0] != '-' && !is_num(str[0]))
		return (-1);
	len = strlen(str);
	i = 1;
	while (i < len)
	{
		if (!is_num(str[i]))
			return (-1);
		i++;
	}
	return (ft_atol(str));
}
