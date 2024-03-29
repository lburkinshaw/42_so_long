/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburkins <lburkins@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:44:52 by lburkins          #+#    #+#             */
/*   Updated: 2024/03/21 12:23:06 by lburkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main (int argc, char **argv)
{
	t_map *game;
	
	game = malloc(sizeof(t_map));
	if (!game)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	init_map(game, argv[1]);
	free_game(game);
	ft_printf("finished\n");//REMOVE
	return (0);
}