/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:28:59 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 10:22:06 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

static long	parse_time(char *str);
static char	*parse_scheduler(char *str);
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
	config.scheduler = parse_scheduler(argv[8]);
	return (config);
}
