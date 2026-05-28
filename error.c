/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 12:48:16 by vdeliere          #+#    #+#             */
/*   Updated: 2026-05-28 12:48:16 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

void err_option(s_cmd *cmd, char fail_opt){
    if (cmd->opt)
        free(cmd->opt);
    if (cmd)
       // free(cmd);

    printf("ping: invalid option -- '%c'", fail_opt);
    exit(EXIT_FAILURE);
}
