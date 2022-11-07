/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:22:58 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/02 12:51:29 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!*s || start > ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char) * (1));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/* La funcion substr reserva con malloc(3) y devuelve una substring 'sub' de*/
/* la string 's'. La substring empieza desde el indice 'start' y tiene una  */
/* longitud maxima 'len'. Los parametros: "s" es la  string desde la que 	*/
/* crear substring. 'start' es el indice del caracter en 's' desde el que 	*/
/* empezar la substring. Length es el numero de caracters a extraer y lon-  */
/* gitud maxima de la substring. Valor a devolver 'sub' la substrig resul-	*/
/* tante o NULL si falla la reserva de memoria. Este metodo devuelve los	*/
/* caracteres de una cadedna. Declaramos un puntero que apunte a la 'sub'.	*/
/* 2. Recorremoss 's' con las condiciones: *Si esta vacio la primera posi-	*/
/* cion de 's' colocamos un '\0' y *Si la dimension de 's' es mayor reserva-*/
/* mos memoria en 'sub' con malloc y asignamos '\0'							*/
/* 3. Si la resta entre la dimesion de 's' y la dimension de 'sub' es menor */
/* que el 'len' reservamos memoria en 'sub'.								*/
