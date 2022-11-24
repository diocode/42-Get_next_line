/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:25:10 by digoncal          #+#    #+#             */
/*   Updated: 2022/11/24 09:25:13 by digoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nbytes, size_t size)
{
	size_t			i;
	unsigned char	*str;

	str = malloc(nbytes * size);
	if (!str)
		return (0);
	i = 0;
	while (i < (nbytes * size))
		str[i++] = '\0';
	return (str);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	int		i;
	int		j;
	char	*str;

	if (!stash)
		stash = (char *) ft_calloc(1, sizeof(char));
	if (!stash || !buffer)
		return (NULL);
	if (ft_strlen(stash) + ft_strlen(buffer) == 0)
	{
		free(stash);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(stash) + ft_strlen(buffer) + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (stash[++i])
		str[i] = stash[i];
	j = 0;
	while (buffer[j])
		str[i++] = buffer[j++];
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
