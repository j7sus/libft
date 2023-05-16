/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:18:28 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 13:51:59 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = 0;
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (dstsize && (--dstsize - lendst) && src[i])
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lensrc + lendst);
}

/* -------------------------------------------------------------------- 
	La función strlcat concatena 2 strings en una misma por len bytes.	
	Primero de nada revisamos que el tamaño de la concatenación que le	
	pasamos como parámetro no seá 0 y que tampoco sea más pequeño que	
	el tamaño de la string de destino. Hacemos el bucle de la concate-	
	ción y le damos a la nueva string el valor final de esta. La fun-	
	ción devolverá la suma de la longitud de las 2 string que le hemos	
	pasado como parámetro.												
	Entiendo que para que esta función sea funcional valga la redun-	
	dancía, el valor de la longitud que recibe la función debe ser la	
	la suma de la longitud de destino más cuantos bytes querémos con-	
	catenar para la nueva string.								    	
   -------------------------------------------------------------------- 
	Otro ejemplo:

{
	int	i;;
	
	dstsize = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0')
	{
		dst[dstsize + i] =  (((char *) src) [i]);
		i++;	
	}
	dst[dstsize + i] = '\0';
	dstsize	=  ft_strlen(dst);
	return (dstsize);
}
  -------------------------------------------------------------------- */
/*
int	main()
{
	char	dist[] = "añade la cadena src al final de dst";
	char	dist2[] = "añade la cadena src al final de dst";
	char	dst[] = "añade la cadena src al final de dst";
	char	src[] = "tu añade que yo te digo";
	printf("la suma de %zu", ft_strlen(dst));
	printf(" mas  %zu son:", ft_strlen(src));
	printf(" %zu\n", ft_strlcat(dst, src, 10));
	printf("la buena  %zu\n", strlcat(dist, src, 10));
	printf("la buena  %zu\n", strlcat(dist, src, 10));
	

	printf("la buena 2  %zu\n", strlcat(dist2, src,10));
	printf("la buena 2  %zu\n", strlcat(dist2, src, 10));
	return (0);
}*/
