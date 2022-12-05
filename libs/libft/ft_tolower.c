/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:18:22 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:24:19 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower('c'));
	printf("%d\n", tolower('c'));
	printf("%d\n", ft_tolower('D'));
	printf("%d\n", tolower('D'));
	printf("%d\n", ft_tolower('^'));
	printf("%d\n", tolower('^'));
	return (0);
}*/
