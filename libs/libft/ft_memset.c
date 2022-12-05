/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:35:16 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/13 17:18:46 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	s[] = "juliana";
	char	s2[] = "juliana";
	int	c;
	size_t	n;

	c = '0';
	n = 3;
	ft_memset(s, c, n);
	printf("%s\n", s);
	memset(s2, c, n);
	printf("%s\n", s2);
	return (0);
}

On transforme le void *s en type unsigned char pour pouvoir faire de
l'arithmetique de pointeur. Et pourquoi un char? Parce que 'memset works
character by character and an integer contains more than one bytes
(or characters).' C'est la meme chose avec la variable 'c'. D'ailleurs,
remarquer que l'attribution de valeur pour 'c' dans le main se fait
entre '' (sinon ca serait la fonction ascii), parce qu'on le castera,
dans la fonction, en unsigned char.
Faire aussi attention a printf lors d'une fonction qui retourne un void:
il vaut mieux separer l'appel de la fonction de printf.*/
