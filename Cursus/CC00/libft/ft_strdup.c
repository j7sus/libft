/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:40:16 by jecontre          #+#    #+#             */
/*   Updated: 2022/10/24 19:10:31 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
/*
int main() 
{
   char *str = "don't panic";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s\n", result);
   return 0;
}*/
/* La funcion strdup asigna suficiente memoria para copiar o duplicar la   */
/* cadena s1. Realiza la copia y devuelve un puntero de la misma. 		   */
/* 1. declaramos una varible tipo caracter para asignarle memoria llamando */
/* la funcion calloc que reserva X espacio en memoria de Y tamano y llena  */
/* de valores cero (limpia).											   */
/* 2. copiamos s1 a dst y devolvemos un puntero 						   */
