/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:27:48 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/06/02 12:48:14 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int		c;

	c = '\0';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = ' ';
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	c = 89;
	printf("%d\n", ft_isprint(c));
	printf("%d\n", isprint(c));
	return (0);
}

Noter que isprint retourne soit zero, soit n'importe quelle valeur
ifferente de zero.*/
