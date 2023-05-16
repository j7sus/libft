/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:21:05 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:21:50 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = b;
	i = 0;
	while (i < len)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
int	main()
{
	char	str[] = "fill block of memory";
	printf("%s\n", ft_memset(str, '0', 4));
	return(0);
}*/
/* --------------------------------------------------------------------------
	La funcion menset copia el caracter 'c' (unsigned char) a los primeros 
	len caracteres de la cadena apuntada, por el argumento *b. Parametros
	dados: *b es un puntero al bloque de memoria a rellenar, 'c' es un valor
	que se va a establecer. El valor se pasa como un int, pero la funcion 
	llena el bloque de medmoria utilizando la conversion a unsigned char de
	este valor, len es el numero de bytes que se van a asignar al valor.
	
	Esta funcion devuelve un puntero al larea de memoria 'b'
   --------------------------------------------------------------------------
	LIBRARY
     Standard C Library (libc, -lc)

	SYNOPSIS
     #include <string.h>

     void *
     memset(void *b, int c, size_t len);

	DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.

	RETURN VALUES
     The memset() function returns its first argument. 
    ----------------------------------------------------------------------- */
