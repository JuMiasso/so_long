/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:47:05 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:14:02 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "juliana";
	char	s2[] = "juliana";
	size_t	n;

	n = 3;
	ft_bzero(s, n);
	printf("%s\n", s + 3);
	bzero(s2, n);
	printf("%s\n", s2 + 3);
	return (0);
}

Noter que la fonction printf s'arrete des qu'elle retrouve un \0.
C'est pourquoi on demande a imprimer a partir de 's + n', car il n'y aura
plus de \0.*/
