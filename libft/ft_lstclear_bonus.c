/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecontre <jecontre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:42:04 by jecontre          #+#    #+#             */
/*   Updated: 2022/11/26 15:39:21 by jecontre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/* ------------------------------------------------------------------------
 La guncion itera la lista 'lst' vacioando su contenido y libera la memoria 
 de toda la lista. Elimina y libera el nodo 'lst' dado como parametro y 
 todo los consecutivos de ese nodo utilizando la funcion 'free(3)'. 			  
 Al final, el puentero a la lista debe ser NULL. 							  
 ------------------------------------------------------------------------- */
