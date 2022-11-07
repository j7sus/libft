/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:50:54 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/06 17:47:00 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     isascii(int c);

DESCRIPTION
     The isascii() function tests for an ASCII character, which is any charac-
     ter between 0 and octal 0177 inclusive. */
