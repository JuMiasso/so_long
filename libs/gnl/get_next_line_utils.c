/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:21:35 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/07/19 11:21:57 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t		i;

	i = 0;
	while (str && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t		i;
	char		*copy;

	copy = (char *)malloc(sizeof(char) * 1);
	if (copy == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*chain;

	i = 0;
	j = 0;
	if (!s1 && s2[i] == 0)
		return (NULL);
	else if (!s1 && s2)
		s1 = ft_strdup("\0");
	chain = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (chain == NULL)
		return (NULL);
	while (s1 && s1[j] != '\0')
		chain[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		chain[i++] = s2[j++];
	chain[i] = '\0';
	free(s1);
	return (chain);
}

char	*ft_copy(char *str, int start, int end)
{
	int		i;
	char	*chain;
	int		size;

	size = (end - start) + 1;
	if (size == 0)
		return (NULL);
	chain = (char *)malloc(sizeof(char) * (size + 1));
	if (chain == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		chain[i++] = str[start++];
	chain[i] = '\0';
	return (chain);
}

int	ft_index(char *stack)
{
	int	i;

	i = 0;
	while (stack[i] != '\0')
	{
		if (stack[i] == '\n')
			return (i);
		i++;
	}
	return (i);
}
