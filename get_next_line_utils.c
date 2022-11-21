/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:33:50 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/21 12:33:05 by digoncal         ###   ########.fr       */
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
	line = malloc(sizeof(char) * (i + 2));
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
	stash[i] = '\0';
	return (line);
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

char	*ft_strjoin(char *stash, char *buffer)
{
	int		i;
	int		len;
	char	*str;

	if (!stash)
	{
		stash = (char *) malloc(sizeof(char));
		stash[0] = '\0';
	}
	if (!stash || !buffer)
		return (0);
	len = ft_strlen((char *)stash) + ft_strlen((char *)buffer) + 1;
	str = (char *) malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	if (stash)
	{
		while (*stash)
			str[i++] = *stash++;
	}
	while (*buffer)
		str[i++] = *buffer++;
	str[i] = '\0';
	free((char *) stash);
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
	char	*str;

	i = 0;
	while (!stash && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	str = (char *) malloc((ft_strlen(stash) - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (stash[++i])
		str[i] = stash[i];
	str[i] = '\0';
	free(stash);
	return (str);
}
