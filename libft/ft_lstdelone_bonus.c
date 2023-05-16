/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:46:36 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:36:30 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	else
	{
		del(lst->content);
		free(lst);
	}
}

/* -----------------------------------------------------------------------
 La funcion toma como parametro un nodo 'lst' y libera la memoria del 	
 contenido utilizando la funcion 'del' dada como parametro; ademas de 	
 liberar el nodo. la memoria de 'next' no debe liberarse. 				
 																			
 Primero asigna un valor a la lista y luego liberamos la memoria			
 ----------------------------------------------------------------------- */
