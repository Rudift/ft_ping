/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdeliere <vdeliere@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-27 14:02:16 by vdeliere          #+#    #+#             */
/*   Updated: 2026-05-27 14:02:16 by vdeliere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ping.h"

int isoption(s_cmd* cmd,char* s){
    size_t i = 0;

    if (s[i] != '-')
        return (0);
    i++;
    while (i < strlen(s)){
        switch(s[i]){
            case 'v':
                break;
            case '?':
                break;
            case 'f':
                break;
            case 'w':
                break;
            case 'l':
                break;
            case 'p':
                break;
            case 's':
                break;
            default:
                err_option(cmd, s[i]);
        }
        i++;
    }
    return (1);
}

void parse_cmd(int ac, char **av, s_cmd *cmd){
    int i = 0;
    bool  has_dest = false;

    cmd->opt = calloc((size_t)ac, sizeof(char));
    if (cmd->opt == NULL)
        return;
    for (int j = 1; j < ac; j++){
        if (isoption(cmd, av[j])){
            for (size_t k = 1; k < strlen(av[j]); k++){
                cmd->opt[i++] = av[j][k];
            }
        }
        else if(inet_pton(av[j]) && has_dest == false){

        }
    }
    cmd->opt[i] = '\0';
}