/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:22:03 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/05 16:13:49 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*SYNOPSIS
     #include <string.h>
     char *ft_strrchr(const char *s, int c);

DESCRIPTION
     The strrchr() function locates to the last occurrence of c (converted to 
	 a char) in the string pointed to by s.  The terminating null character is 
	 considered to be part of the string; therefore if c is `\0', the functions 
	 locate the terminating `\0'.
RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located 
	 character, or NULL if the character does not appear in the
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Locate last occurrence of character in string";
	int	c;

	c = 'l';
	printf("%s\n", ft_strrchr(str, c));
	return (0);
}*/
