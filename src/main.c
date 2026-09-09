/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:25:47 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/09 12:38:55 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "utils.h"

int	main(int argc, char **argv)
{
	t_config	config;

	if (argc != 9)
	{
		print_err(RED"[ERROR]"RESET" Invalid number of argument passed.\n");
		print_err(GREEN"Usage:"RESET" ./codexion <number_of_coders>"
			"<time_to_burnout> <time_to_compile> <time_to_debug>"
			"<time_to_refactor> <number_of_compiles_required> <dongle_cooldown>"
			" <scheduler>");
		return (1);
	}
	config = parse_config(argv);
	if (!is_config_valid(config))
	{
		print_err(RED"[ERROR]"RESET" The provided arguments are invalid.\n");
		return (1);
	}
}
