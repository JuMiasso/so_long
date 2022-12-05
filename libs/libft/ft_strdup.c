/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:30:57 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 14:54:52 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *src)
{
	size_t		len;
	size_t		i;
	char		*copy;

	len = ft_strlen(src);
	copy = (char *)malloc((len + 1) * sizeof(char));
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
/*
int	main(int argc, char **argv)
{
	char	*copy;

	if (argc == 2)
	{
		copy = ft_strdup(argv[1]);
		printf("%s\n", copy);
		free(copy);
		return (0);
	}
	else
	{
		printf("%s\n", "Mettre un seul argument !");
		return (0);
	}
}*/
