/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:17:35 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 14:12:21 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}

/*
int	main()
{
	char	str1[] = "abcdef";
	char	str2[] = "ABCDEF";
	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 4));
	return (0);
}*/
/*   --------------------------------------------------------------------------
	La funcion strncpm compara las 2 strings pasadas como parametros por n 
	bytes. Devolvera la diferencia entre las dos strings
    --------------------------------------------------------------------------
LIBRARY
   Standard C Library (libc, -lc)
   #include <string.h>

   int
   strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
   The strcmp() and strncmp() functions lexicographically compare the null-ter-
   minated strings s1 and s2.

   The strncmp() function compares not more than n characters.  Because
   strncmp() is designed for comparing strings rather than binary data, charac-
   ters that appear after a `\0' character are not compared.

RETURN VALUES
  The strcmp() and strncmp() functions return an integer greater than, equal
  to, or less than 0, according as the string s1 is greater than, equal to, or
  less than the string s2.  The comparison is done using unsigned characters,
  so that `\200' is greater than `\0'.
  -------------------------------------------------------------------------- */
