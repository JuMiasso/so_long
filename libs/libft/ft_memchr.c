/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:16:42 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/25 13:25:51 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*copy;
	size_t			i;

	copy = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (copy[i] == (unsigned char)searchedChar)
			return (&copy[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const int	s[] = {-49, 49, 1, -1, 0, -2, 2};
	int		c;
	size_t		size;
	const char	*ptr;

	c = -1;
	size = 7;
	ptr = ft_memchr(s, c, size);
	printf("%p\n", ptr);
	ptr = memchr(s, c, size);
	printf("%p\n", ptr);
	return (0);
}

Dans le main, la variable temporaire "ptr" sert a me permettre d'imprimer
le retour de la fonction ft_memchr (qui retourne un void *).*/
