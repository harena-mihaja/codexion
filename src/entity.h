/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entity.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 08:43:54 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/10 10:30:41 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_H
# define ENTITY_H
# include <pthread.h>

typedef struct s_coder	t_coder;
typedef struct s_dongle	t_dongle;
typedef struct s_queue	t_queue;

typedef struct s_queue
{
	t_coder		*heap;
	int			size;
}	t_queue;

typedef struct s_dongle
{
	t_queue		*queue;
	long		last_used;
	pthread_t	change_status;
	int			id;
	int			is_available;
}	t_dongle;

typedef struct s_coder
{
	t_dongle	*rdongle;
	t_dongle	*ldongle;
	pthread_t	entity;
	long		last_compiled;
	int			id;
}	t_coder;

#endif
