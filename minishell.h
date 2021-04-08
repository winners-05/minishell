/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:55:34 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/04/08 19:00:55 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

# define BUFFER_SIZE 100

int				outtil(int fd, char **rest, char **line);
int				get_next_line(int fd, char **line);
char			*kayn_ster(char		*str);
char			*ft_substr(char		*s, unsigned int start, size_t len);
char			*ft_strdup(char *s1);
int				ft_strlen(const char *s);
char			*ft_strjoin(char *s1, char *s2);



#endif
