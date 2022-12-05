/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:32:51 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/06/02 12:53:33 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int		c;

	c = 1;
	printf("%d\n", ft_isalpha(c));
	c  = 'a';
	printf("%d\n", ft_isalpha(c));
	return (0);
}*/
