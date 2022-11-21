/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:32:54 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/21 13:29:20 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_file(int fd, char *stash)
{
	int		bytes;
	char	buffer[BUFFER_SIZE];

	//buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	//if (!buffer)
	//	return (NULL);
	bytes = 1;
	while (!ft_strchr(stash, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = ft_read_file(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_getline(stash);
	stash = ft_reset_stash(stash);
	return (line);
}
