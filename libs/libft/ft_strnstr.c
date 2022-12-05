/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:26:58 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/17 15:28:00 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (i + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s1[] = "aaabcabcd";
	const char	s2[] = "cd";
	size_t		n;

	n = 8;
	printf("%s\n", ft_strnstr(s1, s2, n));
	return (0);
}

Dans ce cas-la, je retourne un "&s1[i]" parce que je veux le retour en char 
d'une position specifique de str, et non pas une valeur int ou bien
une valeur totale. Ce qui est interessant, c'est que la fonction va retourner
tout a partir de cette position. Remarquer aussi que, si s2 est vide,
s1 doit etre retournee. J'ai mis un "s2[j + 1] == '\0'" afin
d'eviter un seg fault (puisque le '\0' ne serait pas trouve dans str[i]).
*/
