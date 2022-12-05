/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:21:42 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/06/02 10:04:33 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_findsize_beginning(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] != set[j])
		{
			if (set[j] == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return ((char *)s1);
}

static int	ft_findsize_end(char const *s1, char const *set)
{
	int	j;
	int	size;

	size = ft_strlen(s1);
	while (size >= 0)
	{
		j = 0;
		while (s1[size] != set[j])
		{
			if (set[j] == '\0')
			{
				if (size == 0 && s1[size] != '\0')
					return (size + 1);
				else
					return (size);
			}
			j++;
		}
		size--;
	}
	return (0);
}

static char	*ft_copy(char *chain, char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (size == 1)
	{
		while (i < size)
			chain[i++] = str[j++];
	}
	else
	{	
		while (i <= size)
			chain[i++] = str[j++];
	}
	chain[i] = '\0';
	return (chain);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		size;
	char	*chain;

	str = ft_findsize_beginning(s1, set);
	size = ft_findsize_end(str, set);
	if (size == 0)
	{
		chain = (char *)malloc(sizeof(char));
		if (chain == NULL)
			return (NULL);
		*chain = '\0';
	}
	else
	{
		if (size == 1)
			chain = (char *)malloc(sizeof(char) + 1);
		else
			chain = (char *)malloc(sizeof(char) * (size + 2));
	}
	if (chain == NULL)
		return (NULL);
	if (size > 0)
		ft_copy(chain, str, size);
	return (chain);
}
/*
int	main(void)
{
	char	s1[] = "abcdba";
	char	set[] = "acb";
	char	*ptr;

	ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}

Pour cet exercice, si on enleve le premier ou le dernier caracteres, ceux
qui suivent vont les remplacer. Par exemple:
s = "+oo+Catita_e_Lolita++++o"
set = "+o"
resultat = "Catita_e_Lolita"

Attention: size est un indice, cad, il commence a 0, c'est pourquoi
il faut rajouter + 2 lors de l'allocution d'espace. Et c'est aussi pour ca
qu'il faut gerer les tailles 0 et 1 separemment (ce dernier est gere aussi
dans la ft_findsize_end ET dan ft_copy...), puisque dans les deux cas size
sera = 0.*/
