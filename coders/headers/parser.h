/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:07:49 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 14:44:37 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include <stdlib.h>
# include <limits.h>

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
