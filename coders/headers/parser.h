/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:07:49 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/09 08:53:00 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include <stdlib.h>
# include <limits.h>
# define MIN_NUM_CODER 1
# define MAX_NUM_CODER 200
# define MIN_NUM_COMPILES 1
# define MAX_NUM_COMPILES 10
# define MIN_TIME_MS 0

typedef struct s_config
{
	long	time_burnout;
	long	time_compile;
	long	time_debug;
	long	time_refactor;
	long	dongle_cooldown;
	char	*scheduler;
	int		num_coders;
	int		num_compiles;
}	t_config;

t_config	parse_config(char **argv);
int			is_config_valid(t_config config);

#endif
