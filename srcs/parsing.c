/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:22:10 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/05 18:23:00 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**create_map(char **argv)
{
	char *str;
	char **tab;
	int	i;
	int	fd;

	fd = open(argv[0], O_RDWR);
	i = 0;
	while (1)
	{
		if (!str)
			break ;
		str = get_next_line(fd);
		i++;
		free(str);
	}
	tab = malloc(sizeof(char*) * i);
	close(fd);
	return (tab);
}

char **fill_map(char **argv)
{
	int		fd;
	int		i;
	char 	**tab; 
	
	tab = create_map(argv);
	fd = open(argv[0], O_RDWR);
	i = 0;
	while (tab[i])
	{
		tab[i] = get_next_line(fd);
		i++;
	}
	return (tab);
}