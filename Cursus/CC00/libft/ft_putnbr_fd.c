/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:23:32 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/03 18:06:16 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;
	char		c;

	i = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = (n % 10) + 48;
	write(fd, &c, 1);
}
/*
int	main()
{
	ft_putnbr_fd(0, 1);
	return (0);
}
*/
/* La funcion recoge un numero integer como parametro y lo imprime en la */
/* salida 'fd'. La funcion detecta si en la entrada es um numero integer */
/* negativo o positivo. Al ser void no devuelve nada la funcion.  		 */
/* 1. Gestionamos los negativos escribiendo el maximo valor de un neg int*/
/* colocamos un 'return' vacio para cuando sea el nuemero negativo salga */
/* 2. Si 'n' es un numero onegativo le asignamos el signo '-' 			 */
/* 3. Generamos una recursiva de la funcion cuando 'n' se mayor a '9' 	 */
