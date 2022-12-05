/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:58:40 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/05 17:25:06 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"


int	main()
{
	void	*mlx_ptr;
	// void	*win_ptr;

	mlx_ptr = mlx_init();
	mlx_new_window(mlx_ptr, 1920, 1080, "Hi!");
	mlx_loop(mlx_ptr);
}

