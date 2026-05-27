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

int isoption(char* s){
    size_t i = 0;

    if (s[i] != '-')
        return (0);
    i++;
    while (i < strlen(s)){
        if (!isalpha(s[i]) || s[i] != '?')
            return (0); 
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
        if (isoption(av[j]))
            for (size_t k = 1; k < strlen(av[j]); k++)
                cmd->opt[i++] = av[j][k];
    }
    cmd->opt[i] = '\0';
}