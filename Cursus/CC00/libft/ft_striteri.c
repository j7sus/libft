/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:52:47 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/02 13:10:41 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/* La funcion striteri recorre la string pasada como parametro, al ser void */
/* no devuelve nada.'s' es la string que iterar y 'f' la funcion a aplicar  */
/* sobre cada cacter, son los parametros recibidos. A cada caracter de la 	*/
/* string 's', se aplica la funcion 'f' dando como parametros el indice de  */
/* cada caracter dentro de 's' y la direccion del propio caracter, que podra*/
/* modificarse. 															*/
