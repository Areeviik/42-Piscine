/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 19:40:12 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/01 17:46:07 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "include.h"

int	main(int argc, char **argv)
{
	t_views views;
	t_board board;
	int		solved;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!check_arg(argv[1]))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = parse_arg(argv[1]);
	board = init_square(4);
	solved = FALSE;
	solve(board, views, &solved);
	if (!solved)
		write(1, "Error\n", 6);
	return (0);
}
