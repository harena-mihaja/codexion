/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 16:07:49 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 10:22:09 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H
# include <stdlib.h>

typedef struct s_config
{
	int		num_coders;
	int		time_burnout;
	int		time_compile;
	int		time_debug;
	int		time_refactor;
	int		num_compiles;
	int		dongle_cooldown;
	char	*scheduler;
}	t_config;

t_config	parse_config(char **argv);

#endif
