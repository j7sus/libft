/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:48:46 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/19 14:57:58 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (!*needle)
		return ((char *) haystack);
	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *) haystack + h);
		h++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	haystack[20] = "la respuesta es 42";
	const char	needle[10] = "la";
	char	*ptr;

	ptr = strnstr(haystack, needle, 2);
	printf("la substring es: %s\n", ptr);
	ptr = ft_strnstr(haystack, needle, 2);
	printf("la substring es: %s\n", ptr);
	return (0);
}*/
/*	La función strnstr localiza una string en la primera ocurrencia dentro de */
/*	otra string por n bytes. Localiza la primera aparicion de la subcadena	  */
/*  needle en la cadena haystack, los caracteres de terminacion '\0' no se	  */
/*  comparan. haystack es la main string que debe ser escaneada, needle es la */
/*  small string que se busca dentro/con haystack.							  */
/*  1. Nos aseguramos que needle exita, si no devolvemos haystack. 		      */
/*  2. Recorremos haystack con condiciones: mientras que la suma de ambas di- */
/*  mensiones sea  menor al len, sigue recorriendo y comparando ambas strings */
/*  Si se cumple y finaliza el recorrido return  (la direcion de &  haystack) */
/*  3. Si no, recorremos toda needle y return (haystack + h) 				  */
