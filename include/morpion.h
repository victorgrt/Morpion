/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   morpion.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:08:09 by victor            #+#    #+#             */
/*   Updated: 2023/07/25 15:26:21 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MORPION_H
# define MORPION_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <unistd.h>
# include <fcntl.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "../src/Libft/libft/libft.h"

typedef struct s_game
{
	char    **map;
    char    player1;
    char    player2;
    int     points;
}	t_game;


#endif