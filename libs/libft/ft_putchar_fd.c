/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:06:52 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/23 15:30:43 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'a';
	fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}

Descripteurs de fichier:

Chaque programme en exécution (un processus) possède 3 fichiers qui lui sont
associés. Ces fichiers sont identifiés par des descripteurs. Un descripteur de
fichier est un entier qui permet d’accéder au fichier. Au démarrage d’un
processus, voici les 3 descripteurs qui lui sont automatiquement associés:

0 : entrée standard
1 : sortie standard
2 : sortie d’erreurs*/
