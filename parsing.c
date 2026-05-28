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
    //bool  has_dest = false;

    printf("[parse_cmd] ac = %d\n", ac);
    cmd->opt = calloc((size_t)ac, sizeof(char));
    if (cmd->opt == NULL)
        return;
    for (int j = 1; j < ac; j++){
        printf("[parse_cmd] in for j = %d\n", j);
        if (isoption(cmd, av[j])){
            write(1, "imhere", 6);
            for (size_t k = 1; k < strlen(av[j]); k++){
                printf("av[%d][%ld] = %c\n", j, k, av[j][k]);
                cmd->opt[i++] = av[j][k];
            }
        }
    }
    cmd->opt[i] = '\0';
}