/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade <sade@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:48:49 by sade              #+#    #+#             */
/*   Updated: 2024/03/11 13:36:57 by sade             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include "Libft/libft.h"
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_info
{
    char    *str;
    char    tmp_char;
    int     bit;
    pid_t   pid;
}               t_info;

void    handle_error(char *error_msg);

#endif