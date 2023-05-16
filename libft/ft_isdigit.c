/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:43:09 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:54:42 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	c;

	c = 'j';
	printf("%d\n", ft_isdigit(c));
	return (0);
}*/
/* --------------------------------------------------------------------------
	LIBRARY
     Standard C Library (libc, -lc)

	SYNOPSIS
     #include <ctype.h>

     int
     isdigit(int c);

     int
     isnumber(int c);

	DESCRIPTION
     The isdigit() function tests for a decimal digit character.  Regardless
     of locale, this includes the following characters only:

     ``0''         ``1''         ``2''         ``3''         ``4''
     ``5''         ``6''         ``7''         ``8''         ``9''
  -------------------------------------------------------------------------- */
