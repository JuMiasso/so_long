/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopes-m <jlopes-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:28:42 by jlopes-m          #+#    #+#             */
/*   Updated: 2022/12/07 17:45:59 by jlopes-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 42

char	*gnl_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
size_t	gnl_strlen(char *str);
char	*gnl_copy(char *str, int start, int end);
void	ft_bzero(void *s, size_t n);
char	*gnl_strdup(char *src);
int		gnl_index(char *stack);
#endif