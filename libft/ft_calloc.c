/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:13:02 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:01:34 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
int	main()
{
//	char	*str = "Allocate and zero-initialize array";
	char	*str = ft_calloc(20, sizeof(char));
	printf("%s\n", str);
	return (0);
}*/
/*  ------------------------------------------------------------------------
     1. Un calloc hace lo mismo que un malloc, reserva X espacios en memoria,
     de Y tamano y me devuelve un puntero a ese espacio reservado.
     
	 2. Todo el espacio que reservamos, lo llena de valores 0 pra limpiar la
     basura que pudiera haber dentro (como si hicieramos un bzero).
    -------------------------------------------------------------------------
     #include <stdlib.h>

     void *ft_calloc(size_t count, size_t size);

     The calloc() function contiguously allocates enough space for count
     objects that are size bytes of memory each and returns a pointer to
     the allocated memory.  The allocated memory is filled with bytes of
     value zero.
	
	 RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(),
     and aligned_alloc() functions return a pointer to allocated memory.
     If there is an error, they return a NULL pointer and set errno to
     ENOMEM.
   ------------------------------------------------------------------------- */
