/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:29:02 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/17 11:54:27 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	s[] = "Quando a noite chegar";
	int		c = 'z';

	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}

Il faut caster le retour de la fonction en "char *", car c'est que
demande le prototype. En plus, je retourne un "&s[i]" parce que je veux le
retour en char d'une position specifique de s, et non pas une valeur int
ou bien une valeur totale. D'ailleurs, c'est aussi pour ca qu'on caste
'c' en char).*/
