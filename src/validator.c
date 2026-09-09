/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:38:43 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/09 12:39:23 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "utils.h"

static int	is_time_valid(long time);
static int	is_scheduler_valid(char *s);

int	is_config_valid(t_config config)
{
	if (config.num_coders > MAX_NUM_CODER
		|| config.num_coders < MIN_NUM_CODER
		|| config.num_compiles > MAX_NUM_COMPILES
		|| config.num_compiles < MIN_NUM_COMPILES
		|| !is_time_valid(config.time_burnout)
		|| !is_time_valid(config.time_compile)
		|| !is_time_valid(config.time_debug)
		|| !is_time_valid(config.time_refactor)
		|| !is_time_valid(config.dongle_cooldown)
		|| !is_scheduler_valid(config.scheduler))
		return (0);
	return (1);
}

static int	is_time_valid(long time)
{
	if (time < MIN_TIME_MS)
		return (0);
	return (1);
}

static int	is_scheduler_valid(char *s)
{
	if (strcmp(s, "fifo") && strcmp(s, "edf"))
		return (0);
	return (1);
}
