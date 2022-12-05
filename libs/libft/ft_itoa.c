/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:35:18 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 14:45:08 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_size(int n)
{
	int	size;

	size = 0;
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		size++;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
		return (11);
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				size;
	unsigned int	nb;

	nb = n;
	size = ft_find_size(n);
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	s[size] = '\0';
	if (n < 0)
		nb = -n;
	if (nb == 0)
		s[0] = '0';
	while (nb >= 1)
	{
		s[size - 1] = (nb % 10) + '0';
		nb /= 10;
		size--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*
int	main(void)
{
	int		n;
	char	*s;
	n = 0;
	s = ft_itoa(n);
	printf("%s\n", s);
	free(s);
	return (0);
}

Differemment de la function itoa specifiee dans le man, celle-ci traite
uniquement la base 10.

Pour l'affichage de chaque element de la chaine, il faut commencer de la fin
(size -i) et faire le processus inverse de putnbr: modulo de dix pour arriver
 au dernier chiffre, et ensuite n = n / 10 pour passer a la prochaine case.

 La variable i commence a 1 afin de garder la derniere case ("s[size]")
 vide.*/
