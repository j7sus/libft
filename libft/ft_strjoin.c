/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:37 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/24 18:51:41 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;

	i = 0;
	dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

/* ------------------------------------------------------------------------
   La funcion reserva con malloc y0 devuleve una nueva string formada por la  
   concatenacion de 's1' y 's2'. Los parametros son 's1' la primera string y 
   's2' la string anadir a 's1'

   1. calculamos el tamano a reservar 's1len + s2len' 						  
   2. hacemos en dst un malloc del tamano que necesitamos por el espacio del  
   de variable. Salvamos al malloc											  
   si no hay 'dst' devolvemos NULL.  										  
   3. Copiamos 's1' en 'dst'. 												  
   4. Copiamos 's2' en 'dst' creando un nuevo contador 'j' 					  
   5. Finalizamos a 'dst' asignando '\0'
   -----------------------------------------------------------------------*/
