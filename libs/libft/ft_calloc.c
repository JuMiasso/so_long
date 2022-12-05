/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:15:44 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/06/02 14:24:23 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (nmemb == 0 || size == 0)
	{
		size = 1;
		nmemb = 1;
	}
	if ((nmemb * size) / size != nmemb && size > 0)
		return (NULL);
	tab = (void *)malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, (nmemb * size));
	return (tab);
}
/*
int	main(void)
{
	size_t	nmemb;
	size_t	size;
	int	*ptr;
	size_t	i;

	nmemb = 8;
	size = 4;
	ptr = ft_calloc(nmemb, size);
	i = 0;
	while (i < nmemb)
	{
		printf("tab[i] = %d\n", ptr[i]);
		i++;
	}
	ptr = calloc(nmemb, size);
	i = 0;
	while (i < nmemb)
	{
		printf("tab2[i] = %d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}

Attention: nmemb = nombre d'elements du tableau; size = octets de chaque
element (= 1 octet = 1 byte = 8 byts). Il s'agit ici d'allocution de
memoire, c'est pourquoi on garde le type "void *" (ou ca pourra poser
probleme). Pour la fonction ft_bzero, il faudra donc remplir tout l'espace
alloue, cad (nmemb * size) - si on utilisait juste nmemb, ca ne serait
pas suffisant.

La condition "if ((nmemb * size) / size != nmemb && size > 0)" sert a
gerer la taille max de l'element. en fait, si "nmemb * size" depasse la
taille max, l'ordinateur va attribuer a nmemb une valeur arbitraire, ce qui
fera que nmemb != nmemb.*/
