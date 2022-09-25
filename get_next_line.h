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

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *src, unsigned int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

char	*get_next_line(int fd);
char	*read_main(char *buffer, int fd);
char	*cut_line(char	*buffer);
char	*take_rest(char *buffer);

#endif