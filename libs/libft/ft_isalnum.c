/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:56:58 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 18:41:49 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int		c;

	c = '/';
	printf("%d\n", ft_isalnum(c));
	c = 'd';
	printf("%d\n", ft_isalnum(c));
	c = 5;
	printf("%d\n", ft_isalnum(c));
	c = '*';
	printf("%d\n", ft_isalnum(c));
	return (0);
}*/