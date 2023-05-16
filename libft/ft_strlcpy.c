/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:33:23 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:07:14 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
		return (srcsize);
	while (src[i] != '\0' && (i < dstsize - 1))
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return (srcsize);
}

/*
int	main()
{
	char	src[] = "take the full size of the destination";
	char	dst[] = "42";
	printf("%zu\n", ft_strlcpy(src, dst, 20));
	return (0);
}*/
/* ------------------------------------------------------------------- 
	La funcion copia a la string 'dest' pasada como parametro por n 
	bites, la funcion devuelve la longitud original de la string 'src'
   -------------------------------------------------------------------
   LIBRARY
     Standard C Library (libc, -lc)
     #include <string.h>

     size_t ft_strlcpy(char * restrict dst, const char * restrict src,
     size_t dstsize);

     strlcpy() and strlcat() take the full size of the destination
     buffer and guarantee NUL-termination if there is room.  Note that
     room for the NUL should be included in dstsize.

     strlcpy() copies up to dstsize - 1 characters from the string src
     to dst, NUL-terminating the result if dstsize is not 0.
    RETURN VALUES
     Besides quibbles over the return type (size_t versus int) and sig-
     nal handler safety (snprintf(3) is not entirely safe on some sys-
     tems), the following two are equivalent:

           n = strlcpy(dst, src, len);
           n = snprintf(dst, len, "%s", src);

     The strlcpy() function return the total length of the string they 
	 tried to create.  For strlcpy() that means the length of src.
	 For strlcat() that means the initial length of dst plus the length
	 of src.
   ------------------------------------------------------------------- */
