/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:10:34 by jecontre          #+#    #+#             */
/*   Updated: 2023/01/12 19:25:06 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	len;

	if (n == 0)
		n = 1;
	len = 0;
	if (n < 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	num;

	num = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	if (n < 0)
		n = -n;
	str[len - 1] = '\0';
	while (n)
	{
		str[len - 2] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

/*
int	main()
{
	printf("|%s|\n", ft_itoa(-42));
}*/
/* ----------------------------------------------------------------------
 La funcion 'itoa' (integer to argument string) consiste en la inversa de 
 una funcion 'atoi'. Esta funcion recibe un numero integer como parametro 
 y lo transforma a un string de cacteres. 								

 1. Primero con la funcion "ft_intlen(int n)" medimos como es de grande 	
 un numero. Recorrrimos la string vacia y le asignamos los numeros 		
 pasandolos de int a char. Debemos alocar la memoria necesaria con los 	
 bytes suficientes														
 ----------------------------------------------------------------------- */
