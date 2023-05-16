/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:39:29 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 16:55:51 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	result;

	s = 1;
	result = 0;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str && (ft_isdigit(*str)))
	{
		result = result * BASE10 + (*str - '0');
		str++;
	}
	return (result * s);
}


int	main()
{
	int	val;
	const char	str[] = "El valor de la string es -1";
	val = ft_atoi(str);
	printf("la str %s tiene el valor %d", str, val);
	return (0);
}
/* ------------------------------------------------------------------------
	Esta función convierte una string de numeros a un int si es posible.	
	Primero revisa si hay algún tipo de espacio a principio de la string	
	y si lo hay simplemente se los salta (usando un rango de espacios       
	imprimibles evitando usar 32 que no gusta)  A continuación revisa si    
	hay un signo antes del número. Si encuentra un signo y este es negativo,
	cambiara el valor de una flag a negativo para cuando devolvamos el   	
	valor entienda que ese número es negativo; Si en cambio el signo es	    
	positivo, simplemente saltará el valor. Por último entramos en el bu-	
	cle que recorre la string hasta el final, pasando los números de una	
	string a un int y que siga hasta que se acabe la string o encuentre  	
	algo distinto de un número. El valor a devolver es un int por la flag.	
	Modifique el libft incluyendo un macro BASE10 (int)10					
  ------------------------------------------------------------------------ */
