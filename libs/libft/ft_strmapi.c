/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:25:24 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 14:57:47 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		size;
	unsigned int		i;
	char				*chain;

	i = 0;
	size = ft_strlen(s);
	chain = (char *)malloc(sizeof(char) * size + 1);
	if (chain == NULL)
		return (NULL);
	while (i < size)
	{
		chain[i] = f(i, s[i]);
		i++;
	}
	chain[i] = '\0';
	return (chain);
}
