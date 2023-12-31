/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:07:26 by victor            #+#    #+#             */
/*   Updated: 2023/07/27 13:29:23 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/morpion.h"

char    **create_map2()
{
    char    **map = ft_split("...|...|...", '|');
    // int i = 0;
    // while (map[i])
    // {
    //     int j = 0;
    //     while (map[i][j])
    //     {
    //         printf("[%d][%d] : %c", i, j, map[i][j]);
    //         j++;
    //     }
    //     i++;
    // }
    return (map);
}

void clearScreenUnix()
{
    printf("\033[H\033[2J");
    fflush(stdout);
}

void    printer_field(char **map)
{
    // clearScreenUnix();
    printf("  A   B   C\n");
    printf("1 %c | %c | %c\n2 %c | %c | %c\n3 %c | %c | %c\n\n", map[0][0], map[0][1], map[0][2], map[1][0], map[1][1], map[1][2], map[2][0], map[2][1], map[2][2]);
}

int ft_check_win(t_game *game)
{
    if ((game->map[0][0] == game->player1 && game->map[0][1] == game->player1 && game->map[0][2] == game->player1) || (game->map[0][0] == game->player2 && game->map[0][1] == game->player2 && game->map[0][2] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][0] == game->player1)
        {
            printf("Congrats player 1 won!\n");
        }
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[1][0] == game->player1 && game->map[1][1] == game->player1 && game->map[1][2] == game->player1) || (game->map[1][0] == game->player2 && game->map[1][1] == game->player2 && game->map[1][2] == game->player2))
    {
        printer_field(game->map);
        if (game->map[1][0] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[2][0] == game->player1 && game->map[2][1] == game->player1 && game->map[2][2] == game->player1) || (game->map[2][0] == game->player2 && game->map[2][1] == game->player2 && game->map[2][2] == game->player2))
    {
        printer_field(game->map);
        if (game->map[2][0] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }

    if ((game->map[0][0] == game->player1 && game->map[1][0] == game->player1 && game->map[2][0] == game->player1) || (game->map[0][0] == game->player2 && game->map[1][0] == game->player2 && game->map[2][0] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][0] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[0][1] == game->player1 && game->map[1][1] == game->player1 && game->map[2][1] == game->player1) || (game->map[0][1] == game->player2 && game->map[1][1] == game->player2 && game->map[2][1] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][1] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[0][2] == game->player1 && game->map[1][2] == game->player1 && game->map[2][2] == game->player1) || (game->map[0][2] == game->player2 && game->map[1][2] == game->player2 && game->map[2][2] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][2] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[0][0] == game->player1 && game->map[1][1] == game->player1 && game->map[2][2] == game->player1) || (game->map[0][0] == game->player2 && game->map[1][1] == game->player2 && game->map[2][2] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][0] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    if ((game->map[0][2] == game->player1 && game->map[1][1] == game->player1 && game->map[2][0] == game->player1) || (game->map[0][2] == game->player2 && game->map[1][1] == game->player2 && game->map[2][0] == game->player2))
    {
        printer_field(game->map);
        if (game->map[0][2] == game->player1)
            printf("Congrats player 1 won!\n");
        else
            printf("Congtrats player 2 won!\n");
        return (1);
    }
    return (0);
}

int play_case(t_game *game, char *play, char player)
{
    int i = 0;
    int j = 0;

    if (play[0] == '1' || play[0] == '2' || play[0] == '3')
    {
        if (play[0] == '1')
            i = 0;
        if (play[0] == '2')
            i = 1;
        if (play[0] == '3')
            i = 2;
        if (play[1] == 'A' || play[1] == 'B' || play[1] == 'C')
        {
            if (play[1] == 'A')
                j = 0;
            if (play[1] == 'B')
                j = 1;
            if (play[1] == 'C')
                j = 2;
        }
    }
    else
    {
        printf("Case invalide petit con\n");
        return (1);
    }
    if (game->map[i][j] == '.')
    {
        game->map[i][j] = player;
        if (ft_check_win(game) == 1)
        {
            exit(0);
        }
    }
    else
    {
        printf("Case already used\n");
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    t_game  game;

    char *tmp;
    char    *tmp2;

    game.map = NULL;
    (void) av;

    if (ac == 1)
    {
        game.player1 = 'o';
        game.player2 = 'x';
        tmp = "player 1 >";
        tmp2 = "player 2 >";
        game.p1_tab = NULL;
        game.p2_tab = NULL;
    }
    else if (ac == 5)
    {
        if (av[1][ft_strlen(av[1] - 1) != '>'])
            tmp = ft_strjoin(av[1], " >");
        else
            tmp = av[1];
        game.player1 = av[2][0];
        if (av[3][ft_strlen(av[1] - 1) != '>'])
            tmp2= ft_strjoin(av[3], " >");
        else
            tmp2 = av[3];
        game.player2 = av[4][0];
    }
    else
    {
        printf("Bad Arguments !\nUsage : ./morpion || ./morpion player1 c1 player2 c2");
        return 0;
    }
    game.map = create_map2();
    printer_field(game.map);
    char    *buff;
    int k = 0;
    while ((buff = readline(tmp)) != NULL && ft_strncmp(buff, "stop", ft_strlen(buff)) != 0)
    {
        if (play_case(&game, buff, game.player1) != 1)
        {
            game.p1_tab = malloc(sizeof(char *) * 1024);
            game.p1_tab[k] = ft_strdup(buff);
            k++;
            printer_field(game.map);
            add_history(buff);
            free(buff);
            int l = 0;
            while ((buff = readline(tmp2)) != NULL && ft_strncmp(buff, "stop", ft_strlen(buff)) != 0)
            {
                if (play_case(&game, buff, game.player2) != 1)
                {
                    game.p2_tab = malloc(sizeof(char *) * 1024);
                    game.p2_tab[l] = ft_strdup(buff);
                    l++;
                    printer_field(game.map);
                    add_history(buff);
                    free(buff);
                    break ;
                }
            }
        }
    }
    for (int j = 0; game.p1_tab[j]; j++)
        printf("%d : %s\n", j, game.p1_tab[j]);
    for (int j = 0; game.p2_tab[j]; j++)
        printf("%d : %s\n", j, game.p2_tab[j]);
    for (int i = 0; game.map[i]; i++)
    {
        if (game.map[i] != NULL)
            free(game.map[i]);  // Free each row's memory first.
    }
    free(game.map);
}
