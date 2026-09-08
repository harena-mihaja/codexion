/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:25:47 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 10:22:14 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "parser.h"

int	main(int argc, char **argv)
{
	t_config	config;

	if (argc != 9)
	{
		printf("[ERROR] Invalid number of argument passed.\n");
		printf("Usage: ./codexion <number_of_coders> <time_to_burnout>"
			"<time_to_compile> <time_to_debug> <time_to_refactor>"
			"<number_of_compiles_required> <dongle_cooldown> <scheduler>");
	}
	config = parse_config(argv);
}
