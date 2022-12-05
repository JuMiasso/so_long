/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:49:12 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 18:36:25 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main(void)
{
	int		c;

	c = 'A';
	printf("%d\n", ft_isdigit(c));
	c = '8';
	printf("%d\n", ft_isdigit(c));
	c = '0';
	printf("%d\n", ft_isdigit(c));
	c = '9' + 1;
	printf("%d\n", ft_isdigit(c));
	c = 'v';
	printf("%d\n", ft_isdigit(c));
	return (0);
}*/
