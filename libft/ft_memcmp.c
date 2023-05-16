/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:13:52 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:06:34 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* -------------------------------------------------------------------- */
/*	La función memcmp localiza la primera ocurrencia de la diferencia	*/
/*	de dos string pasadas como parámetros por n bytes y devuelve esa	*/
/*	misma diferencia como resultado. Devolvera 0 o NULL si las dos ca-	*/
/*	denas pasadas son idénticas.										*/
/* --------------------------------------------------------------------
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <string.h>

     int
     memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
     The memcmp() function compares byte string s1 against byte string s2.
	 Both strings are assumed to be n bytes long.

RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
	 otherwise returns the difference between the first two differing 
	 bytes (treated as unsigned char values, so that `\200' is greater 
	 than `\0', for example).  Zero-length strings are always identical.
	 This behavior is not required by C and portable code should only
	 depend on the sign of the returned value. 
 ---------------------------------------------------------------------- */
