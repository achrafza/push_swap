/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azahid <azahid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:44:25 by azahid            #+#    #+#             */
/*   Updated: 2025/03/03 22:14:37 by azahid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup(char *str);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);

#endif
