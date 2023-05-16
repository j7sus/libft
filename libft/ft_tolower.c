/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:36:10 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:10:23 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
int	main(void)
{
	int	c;
	c = 'j';
	printf("%c\n", ft_tolower(c));
	return (c);
}*/
/* ----------------------------------------------------------------------
  La funcion tolower convierte una letra dada en minuscula. Esta funcion
  devuelve la letra minuscula equivalente a c, si existe el valor, de lo
  contrario 'c' permanece sin cambios. El valor se devuelve como un valor
  int que se puede convertir implicitamente en char
   --------------------------------------------------------------------- */
