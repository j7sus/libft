/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:38:18 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:24:47 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* ------------------------------------------------------------------------- 
 Esta funcion cuenta el numero de nodos de una lista y devuelve la longitud 
 de la lista. La funcion itera porr toda la lista y lo cuenta. Devuelve al  
 final el contador "count".												 
   ------------------------------------------------------------------------ */
