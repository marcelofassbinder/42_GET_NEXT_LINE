/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfassbin <mfassbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:59:14 by mfassbin          #+#    #+#             */
/*   Updated: 2023/11/06 21:11:15 by mfassbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t nmemb, size_t size);
int		nextline(char *s);
char	*read_line(int fd, char *str);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char	*ft_strrchr(char *s, int c);

#endif