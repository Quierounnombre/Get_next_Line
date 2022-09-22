/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:33:00 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/21 16:46:56 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*malloc_buffer(size_t size)
{
	char	*s;

	if (!size)
		return (NULL);
	s = (char *)malloc (size * sizeof(char));
	if (!s)
		return (NULL);
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[len1] = s2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (NULL);
}

int	ft_strchr_len(const char *src, unsigned int c)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		if (*src == (unsigned char)c)
		{
			return (i);
		}
		src++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] && j < len)
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_strchr(const char *src, unsigned int c)
{
	while (*src != '\0')
	{
		if (*src == (unsigned char)c)
		{
			return ((char *)src);
		}
		src++;
	}
	if (c == '\0')
		return ((char *)src);
	return (NULL);
}