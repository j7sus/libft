/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:53:41 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:25:27 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

/* ------------------------------------------------------------------------
 la funcion putchar_fd envia el caracter al file descriptor especificado 	 
 los parametros 'c' que es el caracteer a eviar y fd es el file descriptor 
 sobre el que escribir (fd es un identificador unico para archivos u otros 
 recursos de entrada/salida tales como "pipes" o sockets de red) 		   
 ------------------------------------------------------------------------ */
