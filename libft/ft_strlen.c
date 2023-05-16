/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:24:48 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:07:19 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	*s = "0123456789";

	printf("%d\n", ft_strlen(s));
	return (0);
}*/
/* -------------------------------------------------------------------------
	La funcion styrlen calcula la longitud de la cadena dada  sin incluir el
	como parametro sin incluir el caracter nulo al final '\0'
   -------------------------------------------------------------------------
   SYNOPSIS
     #include <string.h>

     size_t
     strlen(const char *s);

     size_t
     strnlen(const char *s, size_t maxlen);

DESCRIPTION
     The strlen() function computes the length of the string s.  The strnlen()
     function attempts to compute the length of s, but never scans beyond the
     first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that precede the
     terminating NUL character.  The strnlen() function returns either the
     same result as strlen() or maxlen, whichever is smaller
   ----------------------------------------------------------------------- */
