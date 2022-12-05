/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:11:01 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/18 19:36:27 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	if (start > size || *s == '\0')
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		*str = '\0';
		return (str);
	}
	if (len > size)
		len = size;
	if ((size - start) < len)
		len = size - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (len-- && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const	s[] = "0123456789";
	char		*ptr;

	ptr = ft_substr(s, 9, 10);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}

Attention! "start" = l'index de debut de la nouvelle chaine, cad, 
c'est sa position et non pas le caractere.
La variable "size" sert a ne pas allouer plus d'espace que ce dont
on a besoin (et la commande "if len > size" sert a faciliter les choses).
"if ((size - start) < len)...": pour les cas ou l'index sera tres avance
et on n'aura pas besoin d'allouer autant de place que len/size.

Les notations *str == 0 et *s == 0 indiquent str/s[0].*/
