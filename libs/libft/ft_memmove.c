/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:04:32 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:18:24 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_copy;
	const unsigned char	*src_copy;
	size_t				i;

	src_copy = src;
	dest_copy = dest;
	i = 0;
	if (dest_copy < src_copy)
	{
		while (i < n)
		{
			dest_copy[i] = src_copy[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest_copy[n - 1] = src_copy[n - 1];
			n--;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Gentileza gera gentileza";
	const char	src[] = "Ser bonito";
	char	dest2[] = "Gentileza gera gentileza";
	const char	src2[] = "Ser bonito";
	size_t	n;

	n = 10;
	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	memmove(dest2, src2, n);
	printf("%s\n", dest2);
	return (0);
}

The memcpy function copies n characters from the source object to the
destination object. If copying takes place between objects that overlap
(quand il n'y a qu'une seule string et on fait des copies à l'intérieur
de cette string - s'il y a deux string, alors memcpy() et memmove()
sont indistinguables -, ou bien quand la dest est plus grande/egale que
la src), the behavior is undefined. The memmove function copies n
characters from the source to the destination object. In memmove before
copying the characters from source to destination object first copied
the n character from source to the temporary string, and after that
copied n character from the temporary string to the destination object.
It prevents from the undefined behavior when the source and destination
object overlaps.

src_copy = src;
dest_copy = dest;
Ca, c'est caster une variable. C'est n'est pas la copier dans une autre
variable. Cela signifie qu'elles sont maintenant liees.

L'inversement des string pour faire la copie evite les chevauchements.

Une autre possibilite, serait de creer un malloc:

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_copy;
	const unsigned char	*src_copy;
	unsigned char		*tmp;
	size_t				i;

	src_copy = src;
	dest_copy = dest;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		tmp[i] = src_copy[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_copy[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}

On cree une variable tmp pour pouvoir executer la copie (ce qu'on 
est pas cense faire avec les cast).
*/
