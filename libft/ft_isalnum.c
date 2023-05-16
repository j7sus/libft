/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:43:33 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:58:30 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = ';';
	printf("%d\n", ft_isalnum(c));
	return (0);
}*/
/* ------------------------------------------------------------------------
	LIBRARY
     Standard C Library (libc, -lc)

	SYNOPSIS
     #include <ctype.h>

     int
     isalnum(int c);

	DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3) or
     isdigit(3) is true.  The value of the argument must be representable as
     an unsigned char or the value of EOF. 
   ------------------------------------------------------------------------- */
