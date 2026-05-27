/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-27 15:05:00 by vdeliere          #+#    #+#             */
/*   Updated: 2026-05-27 15:05:00 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

void    print_cmd(s_cmd *cmd){
    printf("Display de la commande: \n");
    printf("    *Destination: \n");
    printf("    *Options: \n");
    if (cmd->opt == NULL)
        return;
    for (size_t i = 0; i < strlen(cmd->opt); i++){
        printf("        -%c\n", cmd->opt[i]);
    }
}