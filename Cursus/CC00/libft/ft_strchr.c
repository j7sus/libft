/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:47:01 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/08 18:25:42 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * LIBRARY
     Standard C Library (libc, -lc)
     #include <string.h>

* DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a 
	 char) in the string pointed to by s.  The terminating null character is 
	 considered to be part of the string; therefore if c is `\0', the functions 
	 locate the terminating `\0'.

     The strrchr() function is identical to strchr(), except it locates the last 
	 occurrence of c.

	 1. Localizar la primera ocurrencia de (int c), converted to char, en el str 
	 s q' me han pasado.
	 2. El caracteer '\0' se cconsidera tb parte del str, por lo tanto si lo que 
	 tengo que buscar es un '\0' voy a devolver la localizacion del caracter '\0'.
	 3. Devuelvo un puntero donde esta el caracter que buscamos (char *).
	 4. Devolvemos NULL en caso de q' no haya ninguna coincidencia.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if ((char)c == '\0' && s[i] == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "teste";
	int	c  = 'e';
	printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str, c));
	return (0);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

int	main(void)
{
	char	str1[] = "teste";
	int	str2 = 'e';
	char *c;
	
	c = ft_strchr(str1, str2);
	printf("%s\n", c);
	printf("%d\n", c[0] == '\0');
	return (0);
}*/
