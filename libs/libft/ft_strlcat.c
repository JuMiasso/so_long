/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:14:07 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/25 15:26:00 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (destlen >= size)
		return (size + srclen);
	i = 0;
	while (src[i] != '\0' && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
/*
int	main(void)
{
	const char	src[] = "lorem ipsum dolor sit amet";
	char	dest[15] = "rrrrrrrrrrrrrrr";

	printf("%ld\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
	return (0);
}

D'apres le man, la fonction strlcat copie jusqu'a size -1 caracteres de la
chaine src sur dst, et ensuite termine celle-ci avec '\0'.
Attention: si size plus petite que la taille de dest, dest prend la taille
de la size.*/
