/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:15:56 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/06 18:09:59 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			d[i] = (unsigned char)s[i];
			i++;
		}
	}
	if (dst > src)
	{
		i = len;
		while (i != 0)
		{
			d[i - 1] = (unsigned char)s[i - 1];
			i--;
		}
	}
	return (dst);
}	
/*
int	main()
{
	char	d[] = "Move block  of memory";
	char	s[] = "No se si me estoy enterando";
	printf("%s\n", ft_memmove(d, s, 11));
	printf("%s\n", memmove(d, s, 11));
	return (0);
}*/
/*
 LIBRARY
    Standard C Library (libc, -lc)
    #include <string.h>
  DESCRIPTION
    The memmove() function copies len bytes from string src to string dst.
    The two strings may overlap; the copy is always done in a
    non-destructive manner.
 
    Copia los valores de num bytes desde la ubicación apuntada por el origen al
    bloque de memoria apuntado por el destino. La copia tiene lugar como si se
    utilizara un buffer intermedio, permitiendo que el destino y el origen se
    superpongan.
 
    El tipo subyacente de los objetos apuntados por los punteros de origen y
    destino es irrelevante para esta función; el resultado es una copia binaria
    de los datos.
 
    La función no comprueba si hay algún carácter nulo de terminación en el
    origen - siempre copia exactamente num bytes. Para evitar desbordamientos,
    el tamaño de las matrices apuntadas por los parámetros destino y origen,
    deberá ser al menos de num bytes.
 RETURN VALUES
      The memmove() function returns the original value of dst. */
