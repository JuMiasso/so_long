/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:22:10 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/07 19:57:58 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_map_form(char **tab)
{
	int					i;
	long unsigned int	size;

	size = ft_strlen(tab[0]);
	i = 1;
	while (tab[i])
	{
		if (!tab[i + 1])
		{
			if (ft_strlen(tab[i]) == (size - 1))
				return (1);
			ft_printf("Error\n");
			free(tab);
			return (0);
		}
		if (ft_strlen(tab[i]) != size)
		{
			ft_printf("Error\n");
			free(tab);
			return (0);
		}
		i++;
	}
	return (1);
}

int	check_map_file(char **argv)
{
	int	i;
	int	size;

	size = ft_strlen(argv[1]);
	i = size - 4;
	if (ft_strncmp(&argv[1][i], ".ber", 4) == 0)
		return (1);
	else
		return (0);
}

char	**create_map(char **argv)
{
	char	*str;
	char	**tab;
	int		count;
	int		fd;

	fd = open(argv[1], O_RDWR);
	count = 0;
	while (1)
	{
		str = get_next_line(fd);
		if (!str)
			break ;
		free(str);
		count++;
	}
	tab = malloc(sizeof(char *) * count);
	tab[count] = NULL;
	close(fd);
	return (tab);
}

char	**fill_map(char **argv)
{
	int		fd;
	int		i;
	char	**tab;

	if (check_map_file(argv) != 1)
	{
		ft_printf("Error\n");
		return (NULL);
	}
	tab = create_map(argv);
		fd = open(argv[1], O_RDWR);
	i = 0;
	while (1)
	{
		tab[i] = get_next_line(fd);
		if (!tab[i])
			break ;
		i++;
	}
	if (check_map_form(tab) == 0)
		return (NULL);
	return (tab);
}
