/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:06:30 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/06 17:58:26 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{

	char	s[100];
	size_t	n;

	n = 3;
	ft_bzero(s, n);
	printf("%s", s);
	bzero(s, n);
	return(1);

}*/
/*
LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <strings.h>

     void
     bzero(void *s, size_t n);

DESCRIPTION
     The bzero() function writes n zeroed bytes to the string s.  If n is
     zero, bzero() does nothing. */
