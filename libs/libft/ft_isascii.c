/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:00:55 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:15:50 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int		c;

	c = '@';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 'i';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 189;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	c = 52;
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}*/
