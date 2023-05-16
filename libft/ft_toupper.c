/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:47:59 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:07:41 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	uc;

	uc = c;
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
int	main(void)
{
	int	c;

	c = 'j';
	printf("%c\n", ft_toupper(c));
	return (0);
}*/
/* ----------------------------------------------------------------------
  La funcion tolower convierte una letra dada en mayuscula. Esta funcion
  devuelve la letra minuscula equivalente a c, si existe el valor, de lo
  contrario 'c' permanece sin cambios. El valor se devuelve como un valor
  int que se puede convertir implicitamente en char
   --------------------------------------------------------------------- */
