/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:13:34 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:07:46 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int	main()
{
	char	src[] = "Copy block of memory";
	char	dst[] = "Que me cuentas?";
	printf("%s\n", ft_memcpy(dst, src));
}*/
/* ------------------------------------------------------------------------- */
/* La funcion memcpy copia n caracteres del area de memoria 'src' al area de */
/* de memoria 'dest'. Parametreos dados: 'src' es el puntero al origen de los*/
/* datos a copiar, convertido en un puntero tipo void, 'dest' es un puntero a*/
/* la matriz de destino donde se va a copiar el contenido, con un puntero    */
/* tipo void, 'n' es el numero de bites a copiar  							 */
/* ------------------------------------------------------------------------- *
	LIBRARY
     Standard C Library (libc, -lc)

	SYNOPSIS
     #include <string.h>

     void *
     memcpy(void *restrict dst, const void *restrict src, size_t n);

	DESCRIPTION
     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.

	RETURN VALUES
     The memcpy() function returns the original value of dst.
   ------------------------------------------------------------------------ */
