/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:38:43 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 14:04:48 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/parser.h"

static int	is_num_valid(int n);
static int	is_time_valid(long time);
static int	is_scheduler_valid(char *s);

int	is_config_valid(t_config config)
{
	if (!is_num_valid(config.num_coders) ||
		!is_num_valid(config.num_compiles) ||
		!is_time_valid(config.time_burnout) ||
		!is_time_valid(config.time_compile) ||
		!is_time_valid(config.time_debug) ||
		!is_time_valid(config.time_refactor) ||
		!is_time_valid(config.dongle_cooldown) ||
		!is_scheduler_valid(config.scheduler))
		return (0);
	return (1);
}
