/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 10:25:47 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/08 13:22:43 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "headers/parser.h"

int	main(int argc, char **argv)
{
	t_config	config;

	if (argc != 9)
	{
		printf("[ERROR] Invalid number of argument passed.\n");
		printf("Usage: ./codexion <number_of_coders> <time_to_burnout>"
			" <time_to_compile> <time_to_debug> <time_to_refactor>"
			" <number_of_compiles_required> <dongle_cooldown> <scheduler>");
		return (1);
	}
	config = parse_config(argv);
	printf("num coders: %d\n", config.num_coders);
	printf("burnout: %ld\n", config.time_burnout);
	printf("time compile: %ld\n", config.time_compile);
	printf("time debug: %ld\n", config.time_debug);
	printf("ref: %ld\n", config.time_refactor);
	printf("num compile: %d\n", config.num_compiles);
	printf("dongle cooldown: %ld\n", config.dongle_cooldown);
	printf("scheduler: %s\n", config.scheduler);
}
