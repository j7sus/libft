/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:45:13 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 14:25:40 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	star;
	size_t	end;

	star = 0;
	end = ft_strlen(s1);
	while (s1[star] && ft_strchr(set, s1[star]))
		star++;
	while (end > star && ft_strrchr(set, s1[end]))
		end--;
	dst = ft_substr((char *)s1, star, end - (star - 1));
	return (dst);
}

/* ------------------------------------------------------------------------
 La funcion strtrim elimina todos los caracteres de la string 'set' desde el
 principio y final de 's1', hasta encontrar un caracter no perteneciente a 
 'set'. Se devuelve la string resultante 'dst' con una reserva de malloc o 
 NULL si falla la reserva de memoria. Los parametros 's1' es la string que 
 debe ser recortada y 'set' los caracter a eliminar de la string. 		 
 ------------------------------------------------------------------------- */
