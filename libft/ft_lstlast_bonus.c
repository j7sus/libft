/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:50:22 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:32:54 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* ------------------------------------------------------------------------
 La funciopn ft_lstlast devuelve el ultimo nodo de la lista. 'lst' pasado 
 como parametro es el principio de la lista. La funcion recorre la lista  
 hasta el final y devuelve el ultimo  nodo de la lista					
 ------------------------------------------------------------------------ */
