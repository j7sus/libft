/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:07:59 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/08 16:16:27 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     isalpha(int c);

DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or 
	 islower(3) is true.  The value of the argument must be representable as 
	 an unsigned char or the value of EOF.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = '3';
	printf("%d\n", ft_isalpha(c));
	return (0);
}*/
