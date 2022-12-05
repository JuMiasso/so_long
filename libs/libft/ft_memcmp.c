/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:52:05 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/17 11:03:12 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)pointer1;
	ptr2 = (const unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const int	s1[] = {-128, 0, 127, 0};
	const int	s2[] = {0, 0, 127, 0};
	size_t		size;

	size = 1;
	printf("%d\n", ft_memcmp(s1, s2, size));
	printf("%d\n", memcmp(s1, s2, size));
	return (0);
}

Attention: le retour peut etre positif, negatif ou nul. Pour les deux 
premiers, la valeur retournee n'est pas importante. 
En plus: en memoire, on s'en fout des positifs/negatifs. Ainsi, -128 serait
> que 0, par exemple - d'ou travailler avec des valeurs unsigned.*/
