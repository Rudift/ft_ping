/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ping.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-26 13:17:13 by vdeliere          #+#    #+#             */
/*   Updated: 2026-05-26 13:17:13 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <arpa/inet.h>
#include <signal.h>

#ifndef FT_PING_H
#define FT_PING_H

    typedef struct t_cmd{
        char    *opt;
        char    *dest;
    } s_cmd;

    // Parsing
    int isoption(s_cmd* cmd,char* s);
    void parse_cmd(int ac, char **av, s_cmd *cmd);

    // Init
    void init_cmd(s_cmd *cmd);

    // Printers
    void    print_cmd(s_cmd *cmd);

    // Error handler
    void err_option(s_cmd *cmd, char fail_opt);

#endif
