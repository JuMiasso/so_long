/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:33:01 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 14:48:29 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char *str, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0' || str[j] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		j = i;
		while (str[j] != c && str[j] != '\0')
		{
			if (str[j + 1] == c || str[j + 1] == '\0')
				count++;
			j++;
		}
		i = j;
	}
	return (count);
}

static char	*ft_copy(char *str, int start, int end)
{
	int		i;
	char	*chain;
	int		size;

	size = (end - start) + 1;
	chain = (char *)malloc(sizeof(char) * (size + 1));
	if (chain == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		chain[i++] = str[start++];
	chain[i] = '\0';
	return (chain);
}

static char	**ft_print_tab(char *s, char c, char **tab)
{
	int	i;
	int	j;
	int	compteur;
	int	size;

	i = 0;
	j = 0;
	compteur = 0;
	size = ft_word_count(s, c);
	while (compteur < size)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				tab[compteur++] = ft_copy(s, j, i);
			i++;
		}
	}
	tab[compteur] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*str;
	int		size;

	str = (char *)s;
	size = ft_word_count(str, c);
	tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	tab = ft_print_tab(str, c, tab);
	return (tab);
}
/*
int	main(void)
{
	int		i;
	char	**test;
	char const	s[] = "  tripouille  42  ";
	char	c;

	i = 0;
	c = ' ';
	test = ft_split(s, c);
	while (test[i] != 0)
	{
		printf("tab[%d]: %s\n", i, test[i]);
		i++;
	}
	free(test);
	return (0);
}

Lors de la recherche du "char c", il est important de toujours
commencer par les cas ou ce caractere serait trouve, au cas ou
la chaine donnee commencerait par lui.

Dans la ft_word_count, le compteur est incremente lors qu'on
arrive au derniere caractere de chaque string ("if (str[j + 1]
== c || str[j + 1] == '\0'"). Ca permet de gerer les cas ou
la chaine se terminera et/ou commencera par un separateur.*/
