/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:10:25 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:17:52 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_copy;
	const unsigned char	*src_copy;

	i = 0;
	dest_copy = dest;
	src_copy = src;
	while (i < n)
	{
		dest_copy[i] = src_copy[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	const char	src[] = "boba";
	char	dest[] = "juliana";
	const char	src2[] = "boba";
	char	dest2[] = "juliana";
	size_t	n;

	n = 4;
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	memcpy(dest2, src2, n);
	printf("%s\n", dest2);
	return (0);
}*/
