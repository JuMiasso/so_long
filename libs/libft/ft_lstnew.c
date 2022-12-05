/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:22:28 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/30 12:40:01 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*element;

	element = ft_lstnew(str);
	printf("%s\n", (char *)element->content);
	free (element);
	return (0);
}

"Element" est un maillon de la liste chainee, mais cette liste ne sera
vraiment creee que quand les elements seront rattaches entre eux (avec
les fonctions add_front et add_back).

La '->' est l'opérateur d'accès à un element de la liste quand il s'agit d'un
pointeur, qui remplace le point et évite de noter par exemple
"(*pointeur_structure).element".*/
