/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:10:51 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/06/22 15:08:56 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_exception(void)
{
	char	*chain;

	chain = (char *)malloc(sizeof(char));
	if (chain == NULL)
		return (0);
	*chain = '\0';
	return (chain);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size_s1;
	int		size_s2;
	char	*chain;

	i = 0;
	j = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if ((size_s1 + size_s2) == 0)
		return (ft_exception());
	chain = (char *)malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (chain == NULL)
		return (NULL);
	while (*s1 != '\0')
		chain[i++] = *s1++;
	while (s2[j] != '\0')
		chain[i++] = s2[j++];
	chain[i] = '\0';
	return (chain);
}
/*
int	main(void)
{
	char const	s1[] = "julia";
	char const	s2[] = "na ca";
	char	*str;

	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	free(str);
	return (0);
}

Attention: le C n'aime pas que l'on separe les conditions; il faut BIEN
les faire.*/
