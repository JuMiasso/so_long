/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:00:49 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/05/27 19:07:54 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
Chaque element a un content et un next (voir la structure creee).

Lst pointe sur le premier element de la liste. Le next de new doit donc
pointer sur l'adresse de lst (l'ancien premier element), qui doit ensuite
pointer sur new.

A la fin, la valeur de lst est l'adresse de new. Il faut penser aux valeurs
des adresses!*/
