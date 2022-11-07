/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:37:40 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/06 17:51:40 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 122;
	printf("%d\n", ft_isprint(c));
	return (0);
}*/
/*
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     isprint(int c);

DESCRIPTION
     The isprint() function tests for any printing character, including space
     (` ').  The value of the argument must be representable as an unsigned
     char or the value of EOF.

     In the ASCII character set, this includes the following characters (pre-
     ceded by their numeric values, in octal) */
