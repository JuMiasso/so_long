/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:34:30 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:24:37 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	int	c;
	char	x;

	c = 'A';
	x = c;
	ft_toupper(x);
	printf("%s\n", x);
	c = 'A';
	printf("%d\n", toupper(c));
	c = 'a';
	printf("%d\n", ft_toupper(c));
	c = 'a';
	printf("%d\n", toupper(c));
	c = 'b';
	printf("%d\n", ft_toupper(c));
	c = 'b';
	printf("%d\n", toupper(c));
	c = '2';
	printf("%d\n", ft_toupper(c));
	c = '2';
	printf("%d\n", toupper(c));
	c = '*';
	printf("%d\n", ft_toupper(c));
	c = '*';
	printf("%d\n", toupper(c));
	return (0);
}*/
