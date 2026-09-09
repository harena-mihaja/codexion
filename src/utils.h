/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrahamal <hrahamal@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 10:31:45 by hrahamal          #+#    #+#             */
/*   Updated: 2026/09/09 09:37:49 by hrahamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <string.h>
# include <stdio.h>
# include <stdarg.h>
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"

int		is_num(char c);
long	ft_atol(char *s);
void	print_err(const char *format, ...);

#endif
