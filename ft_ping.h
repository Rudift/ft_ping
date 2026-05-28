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
#include <sys/time.h>

#ifndef FT_PING_H
#define FT_PING_H

    typedef struct s_ping
    {
        char                *host;
        struct sockaddr_in  addr;

        int                 sockfd;
        pid_t               pid;

        int                 seq;
        int                 sent;
        int                 received;

        int                 ttl;
        int                 timeout;
        int                 packet_size;
    }   t_ping;

    typedef struct s_icmp
    {
        uint8_t  type;
        uint8_t  code;
        uint16_t checksum;
        uint16_t id;
        uint16_t sequence;
        char     data[56];
    } t_icmp;

#endif
