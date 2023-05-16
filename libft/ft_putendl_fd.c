/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:34:13 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/24 16:18:31 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd , &s[i], 1);
	}
	write(fd, '\n', 1);
}*/

/* --------------------------------------------------------------------------
 	la funcion putendl_fd envia una string 's' al file descriptor dado como 
	parametro 'fd' seguido un salto de linea. 
 --------------------------------------------------------------------------- */
