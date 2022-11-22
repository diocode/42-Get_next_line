/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:50:12 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/22 18:14:27 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_getline(char *stash)
{
	int		i;
	char	*line;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] != '\n' && stash[i])
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	char	*str;

	if (!stash)
	{
		stash = (char *) malloc(sizeof(char));
		stash[0] = '\0';
	}
	if (!stash || !buffer)
		return (NULL);
	if (ft_strlen(stash) + ft_strlen(buffer) == 0)
	{	
		free(stash);
		return (NULL);
	}
	str = malloc((ft_strlen(stash) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*stash)
		*str++ = *stash++;
	while (*buffer)
		*str++ = *buffer++;
	str[ft_strlen(stash) + ft_strlen(buffer)] = '\0';
	free(stash);
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_reset_stash(char *stash)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	str = (char *) malloc((ft_strlen(stash) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (stash[i++])
		str[j++] = stash[i];
	str[j] = '\0';
	free(stash);
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s != c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}
