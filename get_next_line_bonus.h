/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:24:48 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/24 09:24:51 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/* ---------- LIBRARIES ---------- */

# include <stdlib.h>
# include <unistd.h>

/* ---------- FUNCTIONS ---------- */

int		ft_strlen(char *str);

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *stash);
char	*ft_getline(char *stash);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_reset_stash(char *stash);

void	*ft_calloc(size_t nbytes, size_t size);

#endif
