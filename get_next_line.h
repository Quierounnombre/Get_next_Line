/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:32:21 by vicgarci          #+#    #+#             */
/*   Updated: 2022/09/21 17:30:30 by vicgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "unistd.h"
# include "limits.h"
# include "stdlib.h"
# include "stdio.h"
# define BUFFER_SIZE 42

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *src, unsigned int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_lencpy(char *buffer, char *existN);

#endif