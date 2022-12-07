/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:46:25 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/07 17:46:10 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*gnl_verify_buffer(int fd)
{
	char	*buffer;

	buffer = NULL;
	if (fd < 0 || fd > 1024 || read(fd, buffer, 0) != 0)
		return (NULL);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/*Cette fonction aloue de la place pour la variable "buffer" et etablit des
protections pour le programme (valeurs de "fd" et "read" non-conformes).*/

int	gnl_read(char *buffer, int fd)
{
	int	fd_reading;

	fd_reading = read(fd, buffer, BUFFER_SIZE);
	buffer[fd_reading] = '\0';
	return (fd_reading);
}

/*Cette fonction fait appel a la fonction read.*/

char	*gnl_verify_stack(char *stack, char *buffer, int fd_reading)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = NULL;
	if (fd_reading < BUFFER_SIZE)
	{
		tmp = gnl_copy(stack, 0, gnl_index(stack));
		return (free(buffer), tmp);
	}
	while (stack[i] != '\0')
	{
		if (stack[i] == '\n')
		{
			tmp = gnl_copy(stack, 0, i);
			return (free(buffer), tmp);
		}
		i++;
	}
	return (tmp);
}

/*Cette fonction sert a verifier la "stack". If "fd_reading" est
plus petit que "BUFFER_SIZE", cda, si la fonction read a lu les
derniers caracteres du fichier fd, on cree une variable "tmp" avec
les indices de debut et de fin a parti de la "stack": debut = 0; 
fin = indice du premier '\n' trouve ou de '\0' (avec la fonction
ft_index). Ensuite, on free le "buffer" et on renvoie "tmp". Cela
evite des TIMEOUT.
Si "fd_reading" n'est pas plus petit que "BUFFER_SIZE", on fait
la verification directement sur la "stack", tant que l'on ne
tombe pas sur '\0'.
Si aucune de ces conditions est remplie, on retourne tmp = NULL.*/

char	*gnl_clean(char *stack)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (stack[i] != '\0')
	{
		if (stack[i] == '\n')
		{
			i = i + 1;
			j = 0;
			while (stack[i] != '\0')
			{
				stack[j] = stack [i];
				i++;
				j++;
			}
			stack[j] = '\0';
			break ;
		}
		i++;
	}
	if (j == 0)
		return (free(stack), NULL);
	return (stack);
}

/*Cette fonction sert a nettoyer la "stack" avant de renvoyer chaque
ligne. S'il y a un '\n' trouve, on ne va garder que ce qui vient apres
sur la "stack", afin de permettre au programme de lancer le prochain
appel a gnl. S'il n'y a plus rien a copier dedans, cda si a la fin 
"j" est toujours egal a 0, on retourne NULL, afin qu'au prochain
appel gnl renvoie NULL.*/

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*stack;
	char		*tmp;
	int			fd_reading;

	buffer = gnl_verify_buffer(fd);
	if (buffer == NULL)
		return (NULL);
	fd_reading = gnl_read(buffer, fd);
	if (fd_reading < 0)
		return (NULL);
	while (fd_reading >= 0)
	{
		stack = gnl_strjoin(stack, buffer);
		if (stack == NULL || stack[0] == 0)
			return (free(buffer), free(stack), NULL);
		tmp = gnl_verify_stack(stack, buffer, fd_reading);
		if (tmp == NULL)
			fd_reading = gnl_read(buffer, fd);
		else
			break ;
	}
	stack = gnl_clean(stack);
	return (tmp);
}

/*Cette fonction principale cree une boucle a partir de la
valeur renvoyee par la fonction read (= "fd_reading"). Si 
cette valeur est plus grande/egale a 0, la boucle tourne.
Elle cree ou transforme la "stack" a chaque fois, a partir des
valeurs actuelles de "stack" et "buffer", pour ensuite aller
faire la lecture du fichier.
Tout d'abord, si la "stack" est inexistante ou bien si elle
est vide (cda, si la lecture du fichier et sont affichage
sont terminees), la fonction libere "buffer" et "stack" et
retourne "NULL". Sinon, une variable "tmp" est creee a
partir de la fonction gnl_verify_stack. "tmp" est la ligne
que l'on veut retourner. Si "tmp" est NULLE, cda s'il n'y a
pas de '\n' ou '\0' trouve, on fait un nouveal appel a read.
Sinon, on break la boucle et renvoie "tmp", mais avant on
clean la "stack".*/