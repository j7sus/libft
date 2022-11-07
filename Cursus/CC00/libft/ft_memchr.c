/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:22:36 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/14 15:13:13 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
LIBRARY
     Standard C Library (libc, -lc)
     #include <string.h>

     void *ft_memchr(const void *s, int c, size_t n);

DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if no
     such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned int	i;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)&tmp[i]);
		i++;
	}
	return (0);
}

/*
int main () 
{
   const char str[] = "Me entero y No me entero";
   const char ch = 'y';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("La string despues de |%c| es - |%s|\n", ch, ret);

   return(0);
}

int	main()
{
	const char	str1[] = "me entero y no me entero";
	const char	serch = 'y';

	printf("%s\n", ft_memchr(str1, serch, 20));
	printf("%s\n", memchr(str1, serch, 20));
	return (0);
}*/
