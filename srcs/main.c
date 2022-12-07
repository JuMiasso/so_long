/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:58:40 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/07 19:32:09 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	if (argc != 2)
		return (1);
	i = 0;
	tab = fill_map(argv);
	if (tab == NULL)
		return (2);
	while (1)
	{
		ft_printf("%s", tab[i]);
		if (!tab[i])
			break ;
		i++;
	}
	return (0);
}

	// void	*mlx_ptr;
	// // void	*win_ptr;

	// mlx_ptr = mlx_init();
	// mlx_new_window(mlx_ptr, 1920, 1080, "Hi!");
	// mlx_loop(mlx_ptr);