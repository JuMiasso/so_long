/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:00:41 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 16:09:27 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	size_src = ft_strlen(src);
	i = 0;
	if (size > 0)
	{	
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size_src);
}
/*
int	main(void)
{
	const char	src[] = "Bonjour, les gars";
	const char	dest[] = " Hello, guys";

	printf("%ld\n", ft_strlcpy(dest, src, 7));
	printf("%s\n", dest);
	printf("%ld\n", ft_strlcpy(dest, src, 17));
	printf("%s\n", dest);
	return (0);
}

La fonction srtlcpy renvoie TOUJOURS la taille de la chaine src
(independamment de la quantite de caracteres copies). C'est pourquoi,
en plus de copier src sur dest, il faut qu'on appelle la fonction ft_strlen.
Auss, on met (size - 1) parce que, d'apres le man, la fonction strlcpy
copie jusqu'a size -1 caracteres de la chaine src sur dst, et ensuite
termine celle-ci avec '\0'. Remarquer aussi que la taille de dest n'est
pas importante.*/
